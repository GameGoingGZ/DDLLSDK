#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AppsFlyerLib/AppsFlyerLib.h>

@class DDLLAFConversionInfo;

@interface DDLLAppsflyerAdapter : NSObject<AppsFlyerLibDelegate>
@property (class, nonatomic, strong) DDLLAFConversionInfo *conversionInfo;
- (void)initAF;
/// 生成邀请链接
+ (void)generateInviteLinkWithOneLinkId:(NSString *)oneLinkId
                             extendDict:(NSDictionary<NSString *, NSString *> *)extendDict
                        completeCallback:(void (^)(NSString *link))completeCallback;

- (void)onAppOpenAttribution:(NSString *)attributionData;
- (void)onAppOpenAttributionFailure:(NSString *)error;

- (void)onOpenStoreLinkGenerated:(NSString *)link;
+ (instancetype)getInstance;
@end


