#import <Foundation/Foundation.h>
#import "DDLLAdOutInfo.h"

typedef void (^DDLLAdLoadSucBlock)(DDLLAdOutInfo *info,double price);
typedef void (^DDLLAdRevenueBlock)(DDLLAdOutInfo *info,double price);

@interface DDLLAdRevenueEvent : NSObject

+ (void)addAdLoadSucBlock:(DDLLAdLoadSucBlock)block;
+ (void)removeAdLoadSucBlock:(DDLLAdLoadSucBlock)block;
+ (void)notifyAdLoadSuc:(DDLLAdOutInfo *)info price:(double)price;

+ (void)addAdRevenueBlock:(DDLLAdRevenueBlock)block;
/// 仅SDK内部使用
+ (void)addAdRevenueListener:(DDLLAdRevenueBlock)block;
+ (void)removeAdRevenueBlock:(DDLLAdRevenueBlock)block;
+ (void)notifyAdRevenue:(DDLLAdOutInfo *)info price:(double)price;


@end
