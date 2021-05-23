/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, SBDismissOverlaysAnimationController;

@interface SBRotateHomeScreenWorkspaceTransaction : SBMainWorkspaceTransaction

{
    SBDismissOverlaysAnimationController *_animationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)begin;

@end
