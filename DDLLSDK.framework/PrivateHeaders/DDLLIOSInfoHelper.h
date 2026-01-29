#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^UniqueIDCompletion)(NSString *uniqueID);

@interface DDLLIOSInfoHelper : NSObject

@property(nonatomic,strong)NSString * idfa;

+ (NSString *)getIDFV;
+ (NSString *)getIDFA;
+ (NSString *)getCountry;
+ (NSString *)getBundleID;
+ (BOOL)getVPN;
+ (BOOL)getRoot;
+ (void)sendEmailTo:(NSString *)email withTitle:(NSString *)title andContent:(NSString *)content;
+ (void)vibrateLight;
+ (void)vibrateMedium;
+ (void)showAppReview;
+ (void)shareWithSubject:(NSString *)subject content:(NSString *)content imagePath:(NSString *)imagePath completion:(void (^)(BOOL success, NSString *activityType))completion;
+ (NSString *)getLanguage;
+ (NSString *)getBrand;
+ (NSString *)getModel;
+ (int)getModelType;
+ (NSString *)getNetworkType;
+ (NSString *)getAPPVersionName;
+ (NSString *)getAPPVersionCode;
+ (NSString *)getBatID;
+ (BOOL)isNetworkAvailable;
+ (BOOL)isRunningOnSimulator;
+ (BOOL)isUsingProxy;
+ (BOOL)isVPNConnected;
+ (void)getUniqueIDWithCompletion:(UniqueIDCompletion)completion;
+ (NSString *)getScreenResolution;
// 获取运营商信息的方法实现
+ (NSString *)getCarrierName;
+ (void)stopTimer;

@end


