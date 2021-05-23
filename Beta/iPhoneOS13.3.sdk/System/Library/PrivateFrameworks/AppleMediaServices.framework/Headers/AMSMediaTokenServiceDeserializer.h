/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceDeserializer : NSObject

+ (id)_deserializeMediaTokenDictionary:(id)arg1;
+ (id)_correctPayload:(id)arg1;
+ (id)mediaTokenFromDictionary:(id)arg1 error:(id *)arg2;

@end
