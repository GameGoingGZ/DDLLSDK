#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface DDLLAnalytics : NSObject

/// 更新策略ID
/// @param sid 策略ID
+ (void)updateStrategyID:(NSString *)sid;

/// 获取当前策略ID
+ (NSString *)getStrategyID;

/// 记录事件
/// @param eventName 事件名称
/// @param eventID 事件ID
/// @param eventValue 事件值
/// @param eventStatus 事件状态
/// @param errorMsg 错误信息
/// @param dictMap 事件参数
+ (void)trackWithEventName:(NSString *)eventName
                   eventID:(int)eventID
                eventValue:(NSString *)eventValue
               eventStatus:(int)eventStatus
                 errorMsg:(NSString *)errorMsg
                   dictMap:(nullable NSDictionary<NSString *, NSString *> *)dictMap;

/// 记录事件
/// @param eventName 事件名称
/// @param eventID 事件ID
/// @param eventValue 事件值
/// @param eventStatus 事件状态
/// @param errorMsg 错误信息
/// @param infoJson 事件信息的 JSON 字符串
+ (void)trackWithEventName:(NSString *)eventName
                   eventID:(int)eventID
                eventValue:(NSString *)eventValue
               eventStatus:(int)eventStatus
                 errorMsg:(NSString *)errorMsg
                infoJson:(NSString *)infoJson;

/// 记录事件
/// @param eventName 事件名称
+ (void)trackWithEventName:(NSString *)eventName;

/// 记录事件
/// @param eventName 事件名称
/// @param eventJson 事件 JSON 字符串
+ (void)trackWithEventName:(NSString *)eventName
                  eventJson:(NSString *)eventJson;

/// 记录事件
/// @param eventName 事件名称
/// @param dictMap 事件参数
+ (void)trackWithEventName:(NSString *)eventName
                   dictMap:(NSDictionary<NSString *, NSString *> *)dictMap;


/// 立即记录事件
/// @param eventName 事件名称
/// @param eventID 事件ID
/// @param eventValue 事件值
/// @param eventStatus 事件状态
/// @param errorMsg 错误信息
/// @param dictMap 事件参数
+ (void)trackImmediatelyWithEventName:(NSString *)eventName
                              eventID:(int)eventID
                           eventValue:(NSString *)eventValue
                          eventStatus:(int)eventStatus
                            errorMsg:(NSString *)errorMsg
                              dictMap:(nullable NSDictionary<NSString *, NSString *> *)dictMap;

/// 立即记录事件
/// @param eventName 事件名称
/// @param eventID 事件ID
/// @param eventValue 事件值
/// @param eventStatus 事件状态
/// @param errorMsg 错误信息
/// @param infoJson 事件信息的 JSON 字符串
+ (void)trackImmediatelyWithEventName:(NSString *)eventName
                              eventID:(int)eventID
                           eventValue:(NSString *)eventValue
                          eventStatus:(int)eventStatus
                            errorMsg:(NSString *)errorMsg
                           infoJson:(NSString *)infoJson;

/// 立即记录事件
/// @param eventName 事件名称
+ (void)trackImmediatelyWithEventName:(NSString *)eventName;

/// 立即记录事件
/// @param eventName 事件名称
/// @param eventJson 事件 JSON 字符串
+ (void)trackImmediatelyWithEventName:(NSString *)eventName
                            eventJson:(NSString *)eventJson;

/// 立即记录事件
/// @param eventName 事件名称
/// @param dictMap 事件参数
+ (void)trackImmediatelyWithEventName:(NSString *)eventName
                              dictMap:(NSDictionary<NSString *, NSString *> *)dictMap;

/// appsflyer 事件打点
/// @param eventName 事件名称
/// @param eventMap 事件参数
+ (void)afTrackWithEventName:(NSString *)eventName
                    eventMap:(NSDictionary * _Nullable)eventMap;

/// 游戏进入打点
+ (void)sendAppOpen;

/// 游戏退出打点
/// @param enterTime 进入时间
+ (void)sendAppExitWithEnterTime:(NSString *)enterTime;

/// 应用进入前台打点
+ (void)sendAppFront;

@end
NS_ASSUME_NONNULL_END

