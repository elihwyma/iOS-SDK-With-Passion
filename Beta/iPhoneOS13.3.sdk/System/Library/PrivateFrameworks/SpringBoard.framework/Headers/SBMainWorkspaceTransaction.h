/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceTransaction.h>

@class SBMainWorkspaceTransitionRequest;

@interface SBMainWorkspaceTransaction : SBWorkspaceTransaction

@property (nonatomic, readonly) SBMainWorkspaceTransitionRequest *transitionRequest;

- (void)_didComplete;
- (id)initWithTransitionRequest:(id)arg1;

@end
