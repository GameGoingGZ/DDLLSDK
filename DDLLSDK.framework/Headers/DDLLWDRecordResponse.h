//
//  DDLLWDRequestData.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>
#import <DDLLSDK/DDLLWDRecordData.h>
NS_ASSUME_NONNULL_BEGIN


@interface DDLLWDRecordResponse : NSObject

@property (nonatomic, strong) DDLLWDRecordData *data;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;
@end

NS_ASSUME_NONNULL_END
