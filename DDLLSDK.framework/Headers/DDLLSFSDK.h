//
//  DDLLSFSDK.h
//  DDLLSDK
//
//  Created by edy on 2025/10/13.
//

#import <Foundation/Foundation.h>
#import "DDLLSFSDKConfig.h"
#import "DDLLTaskInfo.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^DDLLTaskListenerBlock)(DDLLTaskInfo *taskInfo);

@interface DDLLSFSDK : NSObject

+ (void)initWithSFSDKConfig:(DDLLSFSDKConfig *)config;

/// 添加任务监听
///
/// - Parameter listener:
+ (void)addTaskListener:(DDLLTaskListenerBlock)listener;

/// 移除任务监听
///
/// - Parameter listener:
+ (void)removeTaskListener: (DDLLTaskListenerBlock)listener;

/// 通知SDK任务过期并打点
///
/// - Parameter taskID:
+ (void)trackAdInfoExpired:(NSString *)taskID;

/// 通知SDK任务接收成功
///
/// - Parameter taskID:
+ (void)trackAdInfoReceive:(NSString *)taskID;

/// 客户端通知SDK任务已完成
///
/// - Parameter taskID:
+ (void)setTaskFinished:(NSString *)taskID;

/// 查询是否过期（记录id查询，默认15分钟过期）
///
/// - Parameter taskID:
+ (BOOL)isTimeOver:(NSString *)taskID;

/// 跳到应用商店
///
/// - Parameter bundleId: 包名
+ (BOOL)jumpToAppStore:(NSString *)bundleId;

/// app是否安装接口
///
/// - Parameter bundleId: 包名
/// + (BOOL)isAppInstalled:(NSString *)bundleId;

/// 跳转接口app接口，已安装调用则返回成功，未安装返回失败
///
/// - Parameter bundleId: 包名
/// + (BOOL)jumpToApp:(NSString *)bundleId;

@end

NS_ASSUME_NONNULL_END
