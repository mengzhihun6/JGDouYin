//
//  WebPQueueManager.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebPQueueManager:NSObject

//WebPQueueManager单例
+(WebPQueueManager *)shareWebPQueueManager;

//添加NSOperationQueue队列
-(void)addQueue:(NSOperationQueue *)queue;

//取消指定NSOperationQueue队列
-(void)cancelQueue:(NSOperationQueue *)queue;

//刮起NSOperationQueue队列
-(void)suspendQueue:(NSOperationQueue *)queue suspended:(BOOL)suspended;

@end
