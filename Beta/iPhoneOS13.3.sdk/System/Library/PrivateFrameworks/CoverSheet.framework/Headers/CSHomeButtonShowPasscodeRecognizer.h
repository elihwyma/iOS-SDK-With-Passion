/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSString;

@protocol SBHomeButtonShowPasscodeRecognizerDelegate;

@interface CSHomeButtonShowPasscodeRecognizer : NSObject

{
    NSString *_simplePublicDescription;
    id <SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;
    unsigned long long _state;
    _Bool _fingerWasOnInitially;
    _Bool _fingerHasLifted;
    BSTimer *_minimumTimer;
    NSString *_terminalStateReasoning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBHomeButtonShowPasscodeRecognizerDelegate> delegate;

- (void)dealloc;
- (unsigned long long)_state;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)noteAuthenticated:(_Bool)arg1;
- (id)initWithFingerOn:(_Bool)arg1;
- (void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_invalidateMinimumTimer;
- (void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_minimumTimerFired;
- (void)_simulateTimerFiring;

@end
