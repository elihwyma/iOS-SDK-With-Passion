/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLayoutElementViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSCornerRadiusConfiguration, NSMutableSet, NSString, SBInlineAppExposeContainerViewController;

@interface SBInlineAppExposeLayoutElementViewController : SBLayoutElementViewController <Swift>

{
    SBInlineAppExposeContainerViewController *_inlineContainerViewController;
    NSMutableSet *_maskDisplayCornersReasons;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)prepareForReuse;
- (void)setShadowOffset:(double)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)viewDidLayoutSubviews;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)setMaskDisplayCorners:(_Bool)arg1 forReason:(id)arg2;
- (id)relinquishInlineContainerViewController;
- (_Bool)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;

@end
