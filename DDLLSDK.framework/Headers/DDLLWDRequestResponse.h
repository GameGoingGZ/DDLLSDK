//
//  DDLLWDRequestResponse.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>
#import <DDLLSDK/DDLLWDRequestData.h>
NS_ASSUME_NONNULL_BEGIN

@interface DDLLWDRequestResponse : NSObject

@property (nonatomic, strong) DDLLWDRequestData *data;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END
