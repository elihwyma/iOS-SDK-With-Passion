/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASDCellularIdentity : NSObject

{
    _Bool _roaming;
    NSString *_defaultsKey;
    NSString *_simIdentity;
}

@property (getter=isRoaming) _Bool roaming;
@property (readonly) NSString *defaultsKey;
@property (readonly) NSString *simIdentity;

+ (id)_digestMD5:(id)arg1;
+ (id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id *)arg3;

- (id)description;
- (id)initWithSIMIdentity:(id)arg1 roaming:(_Bool)arg2;

@end
