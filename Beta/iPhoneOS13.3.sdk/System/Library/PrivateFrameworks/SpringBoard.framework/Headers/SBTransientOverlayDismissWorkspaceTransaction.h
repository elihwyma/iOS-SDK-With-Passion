/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@interface SBTransientOverlayDismissWorkspaceTransaction : SBMainWorkspaceTransaction

+ (_Bool)isValidForTransitionRequest:(id)arg1;

- (void)_begin;
- (void)_didComplete;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;

@end
