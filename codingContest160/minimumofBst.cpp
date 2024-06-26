class Solution {
  public:
  int solve(Node*root){
      if(root -> left == NULL){
          return root -> data ;
      }
      return solve(root -> left);
  }
    int getMode(Node* root) {
        // code here
        return solve(root);
    }
};
