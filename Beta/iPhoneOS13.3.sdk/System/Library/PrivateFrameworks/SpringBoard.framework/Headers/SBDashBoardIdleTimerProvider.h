/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableSet, NSString;

@protocol BSInvalidatable, SBDashBoardIdleTimerProviderDelegate, SBFIdleTimerBehaviorProviding, SBIdleTimer;

@interface SBDashBoardIdleTimerProvider : NSObject <Swift>

{
    id <SBIdleTimer> _idleTimer;
    id <SBFIdleTimerBehaviorProviding> _idleTimerProvider;
    id <BSInvalidatable> _stateCaptureAssertion;
    NSMutableSet *_disabledIdleTimerAssertions;
    id <SBDashBoardIdleTimerProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <SBDashBoardIdleTimerProviderDelegate> delegate;
@property (retain, nonatomic) id <SBIdleTimer> idleTimer;
@property (nonatomic, readonly, getter=isIdleTimerEnabled) _Bool idleTimerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)resetIdleTimer;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1;
- (void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2;
- (void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1;
- (id)effectiveIdleTimerBehavior;
- (void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2;
- (void)addDisabledIdleTimerAssertionReason:(id)arg1;
- (void)removeDisabledIdleTimerAssertionReason:(id)arg1;
- (_Bool)isDisabledAssertionActiveForReason:(id)arg1;

@end
