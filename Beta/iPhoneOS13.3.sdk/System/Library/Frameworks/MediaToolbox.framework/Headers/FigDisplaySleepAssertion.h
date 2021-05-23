/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class NSString;

@protocol BSInvalidatable, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface FigDisplaySleepAssertion : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_reason;
    id <BSInvalidatable> _idleTimerAssertion;
    long long _lastIdleTimerResetTime;
}

- (void)dealloc;
- (id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (unsigned char)resetIdleTimer;

@end
