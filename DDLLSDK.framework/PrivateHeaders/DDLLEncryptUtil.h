#import <Foundation/Foundation.h>

@interface DDLLEncryptUtil : NSObject

+ (NSString *)evaDecompress:(NSString *)s;
+ (NSString *)encryptContent:(NSString *)content url:(NSString *)url;
+ (NSString *)decryptContent:(NSString *)content url:(NSString *)url;
+ (NSString *)md5Decode32:(NSString *)content;
+ (NSString *)base64StringFromString:(NSString *)string;
+ (BOOL)isBase64String:(NSString *)data;

@end


