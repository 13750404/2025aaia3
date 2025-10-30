//week08-2.cpp LeetCode�ǲ߭p�eMatrix�x�}��2�D
//73. Set Matrix Zeroes
//�n�p��,����@��Ū,�@��]��0, �n�ⶥ�q,��Ū���A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //��1���q ��Ū�� �O�U�������s������i�Mj
        int M = matrix.size(), N = matrix[0].size(); //����M,�k��N
        vector<int> markI(M, 0), markJ(N, 0);//�ŧiC++���}�C, ���פ��O M N,�̭��]��0
        for (int i=0; i<M; i++){
            for ( int j=0; j<N; j++){
                if(matrix[i][j]==0){//�n�O�U����i,j
                    markI[i] = 1;//�аO�@�U i �����㪽��,���@�U���n�M��0
                    markJ[j] = 1;//�аO�@�U j �����㪽��,���@�U���n�M��0
                }
            }

        }
        //��2���q, �A�ӵ� markI �M markJ ���аO,�������M��0
        for(int i=0; i<M;i++){
            for(int j=0; j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }//�p�G���аO,�A�⥦���������ܦ�0
        }
    }
};
