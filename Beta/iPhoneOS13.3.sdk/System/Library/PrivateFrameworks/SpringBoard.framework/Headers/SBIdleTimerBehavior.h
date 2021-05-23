/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBIdleTimerBehavior : NSObject <Swift>

{
    long long _idleWarnMode;
    long long _idleTimerMode;
    long long _idleTimerDuration;
    double _customIdleWarningTimeout;
    double _customIdleExpirationTimeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;

+ (id)defaultBehavior;
+ (id)autoLockBehavior;
+ (id)disabledBehavior;
+ (id)behaviorForBehaviorProvider:(id)arg1;
+ (id)lockScreenBehavior;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithDuration:(long long)arg1 mode:(long long)arg2 warnMode:(long long)arg3;
- (id)_initWithBehaviorProvider:(id)arg1;

@end
