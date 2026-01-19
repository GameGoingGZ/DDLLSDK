//
//  DDLLTierInfo.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDLLTierInfo : NSObject <NSCoding>

@property (nonatomic, copy) NSString *userTier;
@property (nonatomic, copy) NSString *subChannelTier;

/// 返回 JSON 字符串（对象->字符串），失败返回 nil
- (nullable NSString *)toJsonString;

/// 从 JSON 字符串反序列化，成功返回对象，失败返回 nil
+ (nullable instancetype)fromJsonString:(NSString *)json;

@end

NS_ASSUME_NONNULL_END