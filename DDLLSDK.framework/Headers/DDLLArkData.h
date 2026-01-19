//
//  DDLLArkData.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/9/7.
//
#import <DDLLSDK/DDLLArkKeyValue.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDLLArkData : NSObject

@property (nonatomic, strong) NSString *vid;
@property (nonatomic, strong) NSString *biz;
@property (nonatomic, strong) NSArray<DDLLArkKeyValue *> *fields;


- (NSDictionary *)toDict;
- (NSString *)toJson;
- (instancetype)initWithDict:(NSDictionary *)dict;
@end
NS_ASSUME_NONNULL_END
