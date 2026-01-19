//
//  DDLLFileLog.h
//  DDLLSDK
//
//  Created by zhijieli on 2024/9/6.
//

#import <Foundation/Foundation.h>

@interface DDLLFileLog : NSObject

+ (void)logMessage:(NSString *)message withTag:(NSString *)tag;
+ (void)logError:(NSError *)error withTag:(NSString *)tag;
+ (void)logException:(NSException *)exception withTag:(NSString *)tag;

@end

