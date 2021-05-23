/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSInvocation, NSTimer;

@protocol UIRepeatedActionDelegate;

__attribute__((visibility("hidden")))
@interface UIRepeatedAction : NSObject

{
    _Bool _didCompletePreInvocationDelay;
    _Bool _didCompleteInvocationDelay;
    _Bool _disableRepeat;
    _Bool _skipInitialFire;
    double _preInvocationDelay;
    double _invocationDelay;
    double _repeatedDelay;
    NSInvocation *_invocation;
    id _invocationArgument;
    NSTimer *_timer;
    NSObject<UIRepeatedActionDelegate> *_delegate;
}

@property (retain, nonatomic) NSInvocation *invocation;
@property (retain, nonatomic) id invocationArgument;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double preInvocationDelay;
@property (nonatomic) double invocationDelay;
@property (nonatomic) double repeatedDelay;
@property (nonatomic) _Bool disableRepeat;
@property (nonatomic) _Bool skipInitialFire;
@property (weak, nonatomic) NSObject<UIRepeatedActionDelegate> *delegate;

+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)dealloc;
- (void)invalidate;
- (_Bool)invoke;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)reset;
- (void)schedule;
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)_adjustInvocationForPhase:(unsigned long long)arg1;
- (void)_repeatedTimerFire;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;

@end
