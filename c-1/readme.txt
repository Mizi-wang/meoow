1-代码很乱，萌新见谅..而且是用 visual studio写的 
2-若有意见请大胆表述，无论是好是坏谢谢！（但是不要骂除了我之外别人！！）
3-此文件所用是用低级散列（单层散列），如果喜欢的话你可以自己多套几层，只需
要在if下加一个 int t=<value>之类的，第一个while和第二个while的中间加一个‘while(t--)’
之类的值，并且将 <value>换成你想要的层数
4-本程序用法（编译前）：
	1.根据第7条和代码内的注释调整自己的值类
	2.进行编译，单独取出exe并保证exe可以独立使用，exe一般直接在文件夹下面
	3.处理好之后请删除你改变过（或没改变过）的源码
5-本程序用法（编译后）：
	1.打开，等待判定是否报错，若无则默认程序进入正常工作（我也想加提示但是会报错）
	2.在这里可以回车一下看看有没有输出一个‘0’，有则进入工作
	3.输入你的‘key’，即生成用字符
	4.这里需要自觉（不会做隐藏..）地挡住生成出的字符，然后ctrl-c 再 ctrl-v到家庭管理的密码输入中
	5.长按回车或者快速关闭代码框，不要让自己看到
6-此文件的参数命名很混乱，若是需要嵌入应用中记得修改成你所习惯调用的方式（或自动）（记得全部改掉）以下是各参数的介绍表：
	int search-- 函数，用于对 时间表 和当前的时间对比 ，returnsize会自动计算
	int hour	-- 函数，用于将 时间表 的数转换成字符输出
	int hash	--值，用于散列的迭代
	char d	--值，用于表示所输入的每一个字符的属性
	int *timeout--值，也就是 时间表 本来叫另一个名字的，但是因为脑瓜子一抽取了这个，发现的时候已经太迟了。
	废案-MetaTimes timeTrue --时间表，所保存的是时间点和范围
	
	hour函数内----
	char a	--值，小时
	char b	--值，分钟
	char *NewTime_hour--值，将以上的值捏起来等待输出
	
	search函数内----
	int i	--值，用于计数
	int d	--值，记录当前时间

7-联系邮箱：jcxxca@foxmail.com