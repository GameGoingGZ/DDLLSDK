//
//  DDLLManager.h
//  DDLLSDK
//
//  Created by @姚作潘(yaozuopan@zhizhengroup.com) on 2025/12/19.
//

#import <Foundation/Foundation.h>
#import <DDLLSDK/DDLLUserInfo.h>
#import <DDLLSDK/DDLLSDKAdListener.h>
#import <DDLLSDK/DDLLArkData.h>
#import <DDLLSDK/DDLLGameConfig.h>
#import <DDLLSDK/DDLLWDRequestResponse.h>
#import <DDLLSDK/DDLLWDRecordData.h>
#import <DDLLSDK/DDLLEvent+Ad.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^DDLLUserTierResult)(DDLLTierInfo * _Nullable tierInfo);

@interface DDLLManager : NSObject

+ (instancetype)getInstance;

- (void)initWithCompletion:(void (^)(BOOL success, DDLLUserInfo* userinfo))completedCallback
                        uiViewController:(UIViewController *)context;

- (DDLLUserInfo*)getUserInfo;
- (NSString *)getLanguage;

-(void)feachArkConfigWithBizCodes:(NSString * )bizCodes andCallback:(void (^)(BOOL success, NSArray<DDLLArkData *> * _Nullable response))completion;
-(void)feachDDLLGameConfigWithBizCodes:(NSString * )bizCodes andCallback:(void (^)(BOOL success, NSArray<DDLLGameConfig *> * _Nullable response))completion;
- (void)httpGetWithDict:(NSDictionary * _Nullable) dict andApi:(NSString *)api andComplete:(void (^)(NSString * response))complete;
- (void)httpPostWithDict:(NSDictionary * _Nullable) dict andApi:(NSString *)api andComplete:(void (^)(NSString * response))complete;


- (void)requestMicroWDWithAssetsType:(NSInteger)assetsType
                               paymentType:(NSString *)paymentType
                                   account:(NSString *)account
                                     name:(NSString *)name
                                   amount:(double)amount
                        disanfangzhanghuleixing:(NSString *)disanfangzhanghuleixing
                            gerenshibiehao:(NSString *)gerenshibiehao
                                completion:(void (^)(BOOL success, DDLLWDRequestResponse *response))completion;

- (void)getWDRecordWithCompletion:(void (^)(BOOL success, DDLLWDRecordData *data))completion;

- (void) updateStrategyID:(NSString *)strategyID;

- (BOOL)home;

#pragma mark - 广告播放
- (void)showInterstitialWithSceneID:(NSString *)sceneID
                              didHide:(DidHideBlock)didHide
                            didFail:(DidFailBlock)didFail ;

- (void)showOpenAdWithSceneID:(NSString *)sceneID
                       didHide:(DidHideBlock)didHide
                      didFail:(DidFailBlock)didFail;

- (void)load2showRewardAdWithSceneID:(NSString *)sceneID
                           didReward:(DidRewardBlock)didReward
                              didFail:(DidFailBlock)didFail;

- (void)showBannerAdWithSceneID:(NSString *)sceneID
                       didHide:(DidHideBlock)didHide
                      didFail:(DidFailBlock)didFail;

/// 隐藏 Banner 广告
- (void)hiddenBannerAdWithSceneID:(NSString *)sceneID;

#pragma mark - 判断广告是否有缓存

- (BOOL)isOpenAdReady;
- (BOOL)isRewardAdReady;
- (BOOL)isInterstitialAdReady;

#pragma mark -

// 打点
- (void)trackWithEventName:(NSString *)eventName
                   dictMap:(NSDictionary<NSString *, NSString *> *)dictMap;
//
- (void)trackImmediatelyWithEventName:(NSString *)eventName
                              dictMap:(NSDictionary<NSString *, NSString *> *)dictMap;
// 打点
- (void)trackWithEventName:(NSString *)eventName
                 eventJson:(NSString *)eventJson;
//
// 打点
- (void)trackImmediatelyWithEventName:(NSString *)eventName
                            eventJson:(NSString *)eventJson ;


- (void)afTrackWithEventName:(NSString *)eventName
                    eventMap:(NSDictionary<NSString *, NSString *> * _Nullable)eventMap;
- (NSString *)getVersionName;
- (NSString *)getVersionCode;
- (long)getServerRealTimeStamp;
- (NSString *)getServerRealTimeData;
- (void)trackLevelplayWithRevenue:(NSString *)af_revenue
                           currency:(NSString *)af_currency
                          quantity:(NSString *)af_quantity
                        contentID:(NSString * _Nullable)af_content_id
                          orderID:(NSString * _Nullable)af_order_id
                        receiptID:(NSString * _Nullable)af_receipt_id;
- (void)trackPShowWithType:(NSString *)type result:(NSString *)result;
- (void)trackPSucWithType:(NSString *)type
                    result:(NSString *)result
                     level:(NSString *)level
                    reason:(NSString *)reason
                  goodsId:(NSString *)goodsId
                   sku_id:(NSString * _Nullable)sku_id ;
- (void)trackPClickWithType:(NSString *)type
                      result:(NSString *)result
                       level:(NSString *)level
                      reason:(NSString *)reason
                    goodsId:(NSString *)goodsId
                     sku_id:(NSString * _Nullable)sku_id;
- (NSString *)to;
- (void)enteredHomePage;
- (void)enteredAdScene:(NSString *)adScene;
- (void)clickAdButton:(NSString *)adScene;
- (NSString *)getOpenAdConfig;

/// 该接口已过期(Use `waitUserTierResult` instead)
- (void)requestTierInfo:(DDLLUserTierResult)callback API_DEPRECATED("Use waitUserTierResult instead", ios(2.0, 10.0));

/// 等待用户分层结果，有可能没有回调
- (void)waitUserTierResult:(DDLLUserTierResult)callback;

@end

NS_ASSUME_NONNULL_END
