//
//  Event.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/8/29.
//

#import <Foundation/Foundation.h>
#import "DDLLTierInfo.h"

typedef void (^CompletionHandler)(void);
typedef void(^DDLLUserTierResult)(DDLLTierInfo * _Nullable tierInfoJson);

@interface DDLLEvent : NSObject
// 声明初始化完成事件
+ (void)addOnInitCompletedEvent:(CompletionHandler)handler;
+ (void)removeOnInitCompletedEvent:(CompletionHandler)handler;
+ (void)triggerOnInitCompleted;

#pragma mark - 用户分层

+ (void)addUserTierListener:(DDLLUserTierResult _Nonnull)handler;
+ (void)notifyUserTierListener:(DDLLTierInfo * _Nullable)tierInfo;

#pragma mark -

@end


