/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext

{
    _Bool _animated;
    _Bool _shouldDismissSiriUponPresentation;
    _Bool _shouldDismissSwitcherUponPresentation;
    SBTransientOverlayPresentationManager *_presentationManager;
    SBWorkspaceTransientOverlay *_transientOverlay;
    long long _transitionType;
}

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (nonatomic) _Bool shouldDismissSiriUponPresentation;
@property (nonatomic) _Bool shouldDismissSwitcherUponPresentation;
@property (retain, nonatomic) SBTransientOverlayPresentationManager *presentationManager;
@property (retain, nonatomic) SBWorkspaceTransientOverlay *transientOverlay;
@property (nonatomic) long long transitionType;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;

@end
