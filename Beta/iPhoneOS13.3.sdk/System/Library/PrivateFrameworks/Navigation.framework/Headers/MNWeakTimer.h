/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MNWeakTimer : NSObject

{
    id _target;
    SEL _selector;
    NSTimer *_timer;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic, readonly) NSTimer *timer;

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;

- (void)dealloc;
- (void)invalidate;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)_timerDidFire;

@end
