#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDLLSFSDKConfig : NSObject

@property (nonatomic, assign) BOOL urlOfferOpen;
@property (nonatomic, copy) NSString *urlOfferType;
@property (nonatomic, strong) NSMutableArray<NSString *> *offerForUnitID;
@property (nonatomic, strong) NSMutableArray<NSString *> *offerForAdType;
@property (nonatomic, strong) NSMutableArray<NSString *> *offerForAdSource;
@property (nonatomic, assign) NSInteger urlOfferOpenInterval;
@property (nonatomic, assign) NSTimeInterval urlOfferInitTime;
@property (nonatomic, assign) BOOL isInstalled;
@property (nonatomic, assign) BOOL hadSended;
@property (nonatomic, assign) NSInteger sendInterval;
@property (nonatomic, assign) NSInteger sendIntervalMax;
@property (nonatomic, assign) NSInteger sendClickTimes;
@property (nonatomic, assign) BOOL sendNeedInstall;
@property (nonatomic, assign) NSInteger usefulSecond;
@property (nonatomic, assign) BOOL enableUrlStat;
@property (nonatomic, assign) BOOL isDebug;

// 非链式 set 方法
//- (void)setUrlOfferOpen:(BOOL)value;
//- (void)setUrlOfferType:(NSString *)value;
//- (void)setOfferForUnitID:(NSArray<NSString *> *)list;
//- (void)addOfferForUnitID:(NSString *)unitID;
//- (void)setOfferForAdType:(NSArray<NSString *> *)list;
//- (void)addOfferForAdType:(NSString *)adType;
//- (void)setOfferForAdSource:(NSArray<NSString *> *)list;
//- (void)addOfferForAdSource:(NSString *)adSource;
//- (void)setUrlOfferOpenInterval:(NSInteger)value;
//- (void)setIsInstalled:(BOOL)value;
//- (void)setHadSended:(BOOL)value;
//- (void)setSendInterval:(NSInteger)value;
//- (void)setSendIntervalMax:(NSInteger)value;
//- (void)setSendClickTimes:(NSInteger)value;
//- (void)setSendNeedInstall:(BOOL)value;
//- (void)setUsefulSecond:(NSTimeInterval)value;
//- (void)setEnableUrlStat:(BOOL)value;
//- (void)setDebug:(BOOL)value;

- (void)recordInitTime;
- (BOOL)isUrlOfferOpenIntervalReached;
- (BOOL)isUseAll;
- (BOOL)isUseUnitID;
- (BOOL)isUseAdType;
- (BOOL)isUseAdSource;
- (BOOL)isValidAdType:(NSString *)adType;
- (BOOL)isValidUnitID:(NSString *)unitID;
- (BOOL)isValidAdSource:(NSString *)adSource;
- (NSString *)toJson;
+ (instancetype)fromJson:(NSString *)json;

@end

NS_ASSUME_NONNULL_END
