//week07-4.cpp �ǲ߭p�e Simulation ��4�D
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions =  instructions + instructions + instructions + instructions;//��4��
        cout << instructions;
        int x=0, y=0;//x�y��, y�y��
        int d=0;//d:��Vdirection 0:�_ 1:�F 2:�n 3:��
        //�k��d = (d+1) % 4��4���l��
        //����d = (d-1+4)%4=(d+3)%4���M�i�H��L�� �ӯ��_�F!
        int dx[4] = {0,1,0,-1};//�e�i�@��� �|��x += dx[d] �� += dy[d]
        int dy[4] = {1,0,-1,0};//�o��� �O�a��2D��������� �M�w�e�i�h��
        for (char c : instructions){//�̷Ӧr�����O �@����1�Ӱʧ@
            if(c=='G'){//�e�i1��, �t�Xdx[d] dy[d]�e�i
                x += dx[d];
                y += dy[d];
            }else if(c=='R'){//�k��
                d = (d+1) %4;
            }else if(c=='L'){//����
                d = (d+3)%4;
            }
        }//���}�j���...���M�|�@����,���ɭԷ|�����^��,���ɭԷ|�^��
        //cout << 'x' << x << 'y' << y << endl; �o�Odebug �Ϊ� ���μg�L
        if(x==0 && y==0)return true;
        else return false;
    }
};
