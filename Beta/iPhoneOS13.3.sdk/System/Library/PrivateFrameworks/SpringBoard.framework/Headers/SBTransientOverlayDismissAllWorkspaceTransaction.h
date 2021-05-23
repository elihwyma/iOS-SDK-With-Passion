/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@interface SBTransientOverlayDismissAllWorkspaceTransaction : SBMainWorkspaceTransaction

{
    long long _animatedOverride;
}

@property (nonatomic, getter=isAnimatedOverride) long long animatedOverride;

+ (_Bool)isValidForTransitionRequest:(id)arg1;

- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@end
