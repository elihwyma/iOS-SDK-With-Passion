/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBProcessState, FBProcessWatchdogEventContext, FBSProcessTerminationRequest, NSString, RBSProcessExitContext;

@interface FBProcessExitContext : NSObject <Swift>

{
    unsigned long long _exitReason;
    RBSProcessExitContext *_underlyingContext;
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_watchdogContext;
    FBProcessState *_stateBeforeExiting;
    long long _terminationReason;
}

@property (retain, nonatomic) FBSProcessTerminationRequest *terminationRequest;
@property (retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext;
@property (copy, nonatomic) FBProcessState *stateBeforeExiting;
@property (nonatomic) long long terminationReason;
@property (nonatomic, readonly) unsigned long long exitReason;
@property (nonatomic, readonly) RBSProcessExitContext *underlyingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptionForExitReason:(unsigned long long)arg1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithUnderlyingContext:(id)arg1;
- (_Bool)exitedNormally;
- (long long)exitStatus;
- (int)exitCode;
- (int)terminationSignal;
- (_Bool)consideredJetsam;
- (_Bool)fairPlayFailure;

@end
