/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIAnimationController.h>

@class SBWorkspaceTransitionRequest;

@interface SBUIWorkspaceAnimationController : SBUIAnimationController

@property (nonatomic, readonly) SBWorkspaceTransitionRequest *workspaceTransitionRequest;

- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;

@end
