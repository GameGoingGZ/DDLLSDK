#import <Foundation/Foundation.h>

@class DDLLAdOutInfo;

typedef void (^DDLLAdClickBlock)(DDLLAdOutInfo *info);
typedef void (^DDLLAdCloseBlock)(DDLLAdOutInfo *info);
typedef void (^DDLLAdRewardBlock)(DDLLAdOutInfo *info);
typedef void (^DDLLAdShowFailBlock)(DDLLAdOutInfo *info, NSString *errorMsg);
typedef void (^DDLLAdShowSuccessBlock)(DDLLAdOutInfo *info);
typedef void (^DDLLMaxAdInitSuccessObserver)(void);

@interface DDLLAdEvent : NSObject

+ (void)addAdClickBlock:(DDLLAdClickBlock)block;
+ (void)removeAdClickBlock:(DDLLAdClickBlock)block;
+ (void)notifyAdClick:(DDLLAdOutInfo *)info;

+ (void)addAdCloseBlock:(DDLLAdCloseBlock)block;
+ (void)removeAdCloseBlock:(DDLLAdCloseBlock)block;
+ (void)notifyAdClose:(DDLLAdOutInfo *)info;

+ (void)addAdRewardBlock:(DDLLAdRewardBlock)block;
+ (void)removeAdRewardBlock:(DDLLAdRewardBlock)block;
+ (void)notifyAdReward:(DDLLAdOutInfo *)info;

+ (void)addAdShowFailBlock:(DDLLAdShowFailBlock)block;
+ (void)removeAdShowFailBlock:(DDLLAdShowFailBlock)block;
+ (void)notifyAdShowFail:(DDLLAdOutInfo *)info errorMsg:(NSString *)errorMsg;

+ (void)addAdShowSuccessBlock:(DDLLAdShowSuccessBlock)block;
+ (void)removeAdShowSuccessBlock:(DDLLAdShowSuccessBlock)block;
+ (void)notifyAdShowSuccess:(DDLLAdOutInfo *)info;

+ (void)addMaxAdInitSuccessObserver:(DDLLMaxAdInitSuccessObserver)observer;
+ (void)removeMaxAdInitSuccessObserver:(DDLLMaxAdInitSuccessObserver)observer;
+ (void)notifyMaxAdInitSuccess;

@end
