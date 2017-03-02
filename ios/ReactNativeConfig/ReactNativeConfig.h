// using old header path to work with pre rn 0.40.0
// #import <React/RCTBridgeModule.h>
#import "RCTBridgeModule.h"

@interface ReactNativeConfig : NSObject <RCTBridgeModule>

+ (NSDictionary *)env;
+ (NSString *)envFor: (NSString *)key;

@end
