//
//  DDLLAdOutInfo.h
//  DDLLSDK
//
//  Created by edy on 2025/7/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDLLAdOutInfo : NSObject

@property (nonatomic, copy) NSString *unitID; // 广告单元ID
@property (nonatomic, copy) NSString *networkName; // 广告网络名称
@property (nonatomic, copy) NSString *defaultNetworkName; // 默认网络名称
@property (nonatomic, copy) NSString *adConfigType; // 广告配置类型，默认"default"
@property (nonatomic, copy) NSString *adType; // 广告类型
@property (nonatomic, copy) NSString *requestCode; // 请求码
@property (nonatomic, copy) NSString *adScene; // 广告场景
@property (nonatomic, copy) NSString *mtgPlacementID; // mtg的广告unitID，目前只给mtg使用
@property (nonatomic, assign) BOOL hadClick; // 是否已点击

@property (nonatomic, copy) NSString *replaceAdType;

// 初始化方法
- (instancetype)initWithUnitID:(NSString *)unitID
                  networkName:(NSString *)networkName
                       adType:(NSString *)adType
                      adScene:(NSString *)adScene;

// 转换为 JSON 字符串
- (NSString *)toJson;
- (NSString *)getFetchAdType;

- (NSString *)getFetchAdType;

@end

NS_ASSUME_NONNULL_END
