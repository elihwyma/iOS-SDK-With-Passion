/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSError, SBLayoutState, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransaction;

@interface SBLayoutStateTransitionContext : NSObject

{
    _Bool _complete;
    _Bool _animationsDisabled;
    SBLayoutState *_fromLayoutState;
    SBLayoutState *_toLayoutState;
    NSError *_error;
    SBWorkspaceTransaction *_workspaceTransaction;
    SBWorkspaceApplicationSceneTransitionContext *_applicationTransitionContext;
}

@property (weak, nonatomic, readonly) SBWorkspaceTransaction *workspaceTransaction;
@property (weak, nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *applicationTransitionContext;
@property (nonatomic, readonly) SBLayoutState *fromLayoutState;
@property (nonatomic, readonly) SBLayoutState *toLayoutState;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, getter=isInterrupted) _Bool interrupted;
@property (nonatomic, readonly) _Bool animationsDisabled;

- (id)init;
- (id)initWithWorkspaceTransaction:(id)arg1;
- (void)transitionCompletedWithError:(id)arg1;

@end
