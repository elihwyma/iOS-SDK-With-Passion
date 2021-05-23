/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface HDPowerAssertion : NSObject

{
    unsigned int _assertionID;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _timeoutHandler;
    _Atomic _Bool _invalidated;
    NSString *_identifier;
    double _timeout;
}

@property (readonly) _Bool invalidated;
@property (copy, readonly) NSString *identifier;
@property (readonly) double timeout;

+ (id)powerAssertionWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_scheduleTimer;
- (void)_timerDidFire;
- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(CDUnknownBlockType)arg3;

@end
