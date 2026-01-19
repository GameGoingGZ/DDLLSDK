//
//  Event+Ad.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/8/29.
//

#import <Foundation/Foundation.h>
#import "DDLLEvent.h"
// 定义 block 类型的别名
typedef void (^AdShowHandler)(BOOL show);
typedef void (^RevenuePaidHandler)(double amount);
@interface DDLLEvent(Ad)

// 广告显示事件的方法
+ (void)addOnAdShowEvent:(AdShowHandler)handler;
+ (void)removeOnAdShowEvent:(AdShowHandler)handler;
+ (void)triggerOnAdShow:(BOOL)show;

// 收入支付事件的方法
+ (void)addOnRevenuePaidEvent:(RevenuePaidHandler)handler;
+ (void)removeOnRevenuePaidEvent:(RevenuePaidHandler)handler;
+ (void)triggerOnRevenuePaid:(double)amount;

@end


