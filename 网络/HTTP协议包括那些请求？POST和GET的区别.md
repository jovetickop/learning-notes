- GET:请求读取由URL所标志的信息
- POST:给服务器添加信息
- PUT:在给定的URL下存储一个文档
- DELETE:删除给定的URL所标志的资源



##POST和GET区别：

- **Get是从服务器上获取数据，POST是向服务器发送数据**
- GET是把参数数据队列加到提交表单的Action属性所指向的URL中，值和表单内各个字段一一对应，在URL中可以看到
- **GET传送的数据量小**，不能大于2KB，POST传送的数据量大，一般被默认为不受限制
- **GET是安全和幂等的** ：安全即该操作用于获取信息而非修改信息，幂等意味着对同一URL的多个请求应该返回同样的结果。