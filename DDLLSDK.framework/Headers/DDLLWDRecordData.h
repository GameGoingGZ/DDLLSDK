//
//  DDLLWDRecordData.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>
#import <DDLLSDK/DDLLWDRecordItemData.h>
#import <DDLLSDK/DDLLBalances.h>
#import <DDLLSDK/DDLLWDRecordData.h>
NS_ASSUME_NONNULL_BEGIN


@interface DDLLWDRecordData : NSObject

@property (nonatomic, assign) float total;
@property (nonatomic, strong) NSArray<DDLLWDRecordItemData *> *list;
@property (nonatomic, strong) NSArray<DDLLBalances *> *zhanghuyue;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;
@end

NS_ASSUME_NONNULL_END
