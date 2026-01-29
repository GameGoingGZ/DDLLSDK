#import <Foundation/Foundation.h>


@interface DDLLAFConversionInfo : NSObject

/// 是否成功
@property (nonatomic, assign) BOOL success;

/// 错误信息
@property (nonatomic, copy) NSString *errorMsg;

/// 原始数据
@property (nonatomic, copy) NSDictionary *conversionData;

/// 渠道
@property (nonatomic, copy) NSString *channel;

/// 代理
@property (nonatomic, copy) NSString *agency;

@property (nonatomic, copy) NSString *siteID;

/// 如果此安装来自邀请链接，此参数表示邀请者的邀请码
@property (nonatomic, copy) NSString *inviteCode;

/// 判断是否为未知渠道
- (BOOL)isUnknown;

/// 获取渠道信息
- (NSString *)getChannel;
- (NSString *)getSiteID;

/// 获取原始数据
- (NSString *)getConversionData;
- (NSDictionary *)toDict;

- (NSString *)toJson;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end


