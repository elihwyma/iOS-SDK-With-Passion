/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface MP_AES_CTR : NSObject

+ (id)encrypt:(id)arg1 key:(id)arg2 IV:(id)arg3;
+ (id)decrypt:(id)arg1 key:(id)arg2 IV:(id)arg3;
+ (id)crypt:(id)arg1 key:(id)arg2 IV:(id)arg3;

@end
