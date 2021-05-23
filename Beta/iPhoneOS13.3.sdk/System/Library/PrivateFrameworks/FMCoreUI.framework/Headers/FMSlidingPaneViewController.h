/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <FMCoreUI/FMViewController.h>

@class FMFuture, NSMutableArray, SlidingPaneViewState, UIView, UIViewController, UIVisualEffect;

@protocol FMSlidingPaneViewControllerDelegate;

@interface FMSlidingPaneViewController : FMViewController

{
    _Bool _didHideToolbar;
    UIVisualEffect *_paneVisualEffect;
    id <FMSlidingPaneViewControllerDelegate> _delegate;
    double _animationDuration;
    double _animationSpringDamping;
    double _animationInitialVelocity;
    unsigned long long _animationOptions;
    SlidingPaneViewState *_paneState;
    NSMutableArray *_actionFutures;
    struct UIEdgeInsets _paneInsets;
    struct UIEdgeInsets _paneContentInsets;
}

@property (retain, nonatomic) SlidingPaneViewState *paneState;
@property (nonatomic) _Bool didHideToolbar;
@property (retain, nonatomic) NSMutableArray *actionFutures;
@property (nonatomic, readonly) FMFuture *currentFuture;
@property (weak, nonatomic) id <FMSlidingPaneViewControllerDelegate> delegate;
@property (nonatomic, readonly) UIViewController *paneViewController;
@property (nonatomic, readonly) UIView *paneView;
@property (nonatomic) struct UIEdgeInsets paneInsets;
@property (nonatomic) struct UIEdgeInsets paneContentInsets;
@property (nonatomic) double animationDuration;
@property (nonatomic) double animationSpringDamping;
@property (nonatomic) double animationInitialVelocity;
@property (nonatomic) unsigned long long animationOptions;
@property (retain, nonatomic) UIVisualEffect *paneVisualEffect;
@property (nonatomic, readonly, getter=isPaneShowing) _Bool paneShowing;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)awakeFromNib;
- (id)traitCollectionForChildViewController:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_paneFrameChanged:(struct CGRect)arg1;
- (void)commonConfiguration;
- (void)_crossDissolveOldPaneState:(id)arg1 newPaneState:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentPaneState:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGSize)_preferredSizeForPaneState:(id)arg1;
- (void)didPresentPane:(id)arg1 inRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)_dismissPaneState:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPaneViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paneSizeChanged:(struct CGRect)arg1 forViewController:(id)arg2;
- (id)_paneParentView;
- (id)_metricsFromEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)newActionFuture;
- (void)_createPaneViewForState:(id)arg1;
- (void)_createPaneContentConstraintsForState:(id)arg1;
- (void)willPresentPane:(id)arg1 inRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)completeFuture:(id)arg1;
- (void)willDismissPane:(id)arg1 animated:(_Bool)arg2;
- (void)_removeChildViewControllerForState:(id)arg1;
- (void)didDismissPane:(id)arg1 animated:(_Bool)arg2;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 withPercent:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPresentingConstraintConstant:(double)arg1;
- (void)dismissSegue:(id)arg1;
- (void)dismiss:(id)arg1 forEvent:(id)arg2;
- (struct CGSize)_normalizeSize:(struct CGSize)arg1;

@end
