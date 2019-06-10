//
//  WebSocketManager.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

//定义消息通知常量名称
extern NSString *const WebSocketDidReceiveMessageNotification;

@interface WebSocketManager:NSObject
//WebSocketManager单例
+ (instancetype)shareManager;
//断开连接
- (void)disConnect;
//连接
- (void)connect;
//发送消息
- (void)sendMessage:(id)msg;

@end
