/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDQueryServerClientState : NSObject <Swift>

{
    unsigned int _applicationState;
}

@property (nonatomic, readonly, getter=isForeground) _Bool foreground;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationState:(unsigned int)arg1;

@end
