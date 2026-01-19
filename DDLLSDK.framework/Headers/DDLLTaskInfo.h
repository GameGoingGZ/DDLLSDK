#import <Foundation/Foundation.h>
#import "DDLLAdOutInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface DDLLTaskInfo : NSObject

@property (nonatomic, copy) NSString *taskId;
@property (nonatomic, copy) NSString *packageName;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *intentUrl;
@property (nonatomic, copy) NSString *requestCode;
@property (nonatomic, assign) NSTimeInterval createMilliSecond;
@property (nonatomic, assign) NSTimeInterval sendMilliSecond;
@property (nonatomic, copy) NSString *unitID;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic, copy) NSString *defaultNetworkName;
@property (nonatomic, copy) NSString *adConfigType;
@property (nonatomic, copy) NSString *adType;
@property (nonatomic, copy) NSString *adScene;
@property (nonatomic, copy) NSString *placementID;

- (instancetype)initWithTaskId:(NSString *)taskId
                   packageName:(NSString *)packageName
                         icon:(NSString *)icon
                    intentUrl:(NSString *)intentUrl
                    adOutInfo:(DDLLAdOutInfo *_Nullable)adOutInfo;

- (void)setAdOutInfo:(DDLLAdOutInfo *_Nullable)adOutInfo;
//
//- (void)setSendMilliSecond:(NSTimeInterval)sendMilliSecond;
//- (NSTimeInterval)getSendMilliSecond;
//- (NSTimeInterval)getCreateMilliSecond;
- (NSString *)toJson;
- (NSDictionary *)toMap;
- (NSDictionary *)toStatMap;

@end

NS_ASSUME_NONNULL_END
