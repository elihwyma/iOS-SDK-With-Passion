/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKViewController.h>

@class NSString;

@interface GKWelcomeViewController : GKViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
- (id)bubbleAnimatorForTransitionToViewController:(id)arg1;
- (struct CGRect)finalScreenFrameInViewCoordinatesForBubbleOfType:(long long)arg1;
- (void)configureControlForBubble:(id)arg1;
- (double)bubbleFlowAnimateOutDuration;
- (double)bubbleFlowAnimateInDuration;
- (_Bool)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (_Bool)_gkCanBeRemovedFromParentWhenCovered;
- (_Bool)_shouldAnimateBubblesIn;

@end
