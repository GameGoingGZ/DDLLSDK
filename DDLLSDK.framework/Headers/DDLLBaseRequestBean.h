#import <Foundation/Foundation.h>

@interface DDLLBaseRequestBean : NSObject

@property (nonatomic, copy) NSString *random;
@property (nonatomic, copy) NSString *strNew;
@property (nonatomic, copy) NSString *method;

- (instancetype)init;
- (NSDictionary *)toDictionary;

@end
