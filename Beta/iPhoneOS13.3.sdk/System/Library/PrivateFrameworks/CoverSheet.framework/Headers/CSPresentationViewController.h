/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class NSArray, NSMutableArray, NSString;

@interface CSPresentationViewController : CSCoverSheetViewControllerBase

{
    unsigned long long _mutatingPresentation;
    unsigned long long _transitioning;
    NSMutableArray *_contentViewControllers;
    NSArray *_activeContentViewControllers;
}

@property (nonatomic, readonly, getter=hasContent) _Bool hasContent;
@property (nonatomic, readonly, getter=isPresentingContent) _Bool presentingContent;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (copy, nonatomic, readonly) NSArray *contentViewControllers;
@property (copy, nonatomic, readonly) NSArray *presentedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)handleEvent:(id)arg1;
- (long long)participantState;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)presentContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissPresentationAnimated:(_Bool)arg1;
- (void)updatePresentationAnimated:(_Bool)arg1;
- (void)presentContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissContentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)presentContentViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateContentViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissContentViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reflowPresentationWithAnimationSettings:(id)arg1;
- (void)aggregatePresentation:(id)arg1;
- (_Bool)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id *)arg2;
- (void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3;

@end
