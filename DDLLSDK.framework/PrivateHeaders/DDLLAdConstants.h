//
//  DDLLAdConstants.h
//  DDLLSDK
//
//  Created by edy on 2025/7/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDLLAdConstants : NSObject

extern NSString *const DDLLAdTypeReward;
extern NSString *const DDLLAdTypeOpen;
extern NSString *const DDLLAdTypeIns;
extern NSString *const DDLLAdTypeBanner;

extern NSString *const DDLLConfigTypeWaterfall;
extern NSString *const DDLLConfigTypeBidder;
extern NSString *const DDLLConfigTypeMediation;
extern NSString *const DDLLConfigTypeSmartWaterfall;

extern const BOOL DDLLEnableAdLoadAfterClose;

extern NSString * const DDLLAdLoadStatusProload;
extern NSString * const DDLLAdLoadStatusLoad2Show;
extern NSString * const DDLLAdLoadStatusRetry;
extern NSString * const DDLLAdLoadStatusAfterClose;
extern NSString * const DDLLAdLoadStatusShowFail;
extern NSString * const DDLLAdLoadStatusAuto;
extern NSString * const DDLLAdLoadStatusSmartALoad;

@end

NS_ASSUME_NONNULL_END
