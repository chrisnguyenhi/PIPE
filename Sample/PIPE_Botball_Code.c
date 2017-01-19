int main(){
 create_connect();
icreate_forward(300);
 msleep(500);
icreate_CCW (40);
 msleep(500);
icreate_CW (4);
 msleep(500);
icreate_forward(-200);
 msleep(500);
while(!(get_create_rbump(100)) && !(get_create_lbump(100)));
 msleep(9);
}
