##assignment26-TCP bind shell
这是一个用C语言实现的简易TCP绑定型Shell.通过socket，bind,listen,accept等系统调用实现网络监听，并使用dup2进行重定向。
具体过程为
socket,申请通信资源,拿出一个传声筒。
bind,绑定 IP 和端口,跑到 5555 号窗户守着。
listen,开始监听,开启静音模式，死等动静。
accept,建立连接,伸出手，抓住爬进来的强盗。
dup2,复制文件描述符,换头手术：把管家的五官接到电话线上。
execve,执行程序,叫醒管家，让他开始干活。
