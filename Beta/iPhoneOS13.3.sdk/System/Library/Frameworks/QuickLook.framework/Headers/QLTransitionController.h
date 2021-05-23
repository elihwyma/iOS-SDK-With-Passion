/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSDate, NSString, QLPreviewController, QLTransitionContext, UINavigationController, UIView, UIViewController;

@protocol QLCustomTransitioning, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface QLTransitionController : NSObject

{
    UIView *_transitionBackgroundView;
    UINavigationController *_disabledNavigationController;
    CDUnknownBlockType _startTransitionBlock;
    _Bool _showing;
    _Bool _hasPerformedTransition;
    QLTransitionContext *_quickLookTransitionContext;
    UIViewController<QLCustomTransitioning> *_animatedController;
    id <UIViewControllerContextTransitioning> _transitionContext;
    id _transitionDriver;
    double _duration;
    unsigned long long _transitionState;
    NSDate *_setupDate;
}

@property (retain, nonatomic) NSDate *setupDate;
@property (nonatomic) _Bool hasPerformedTransition;
@property (retain) QLTransitionContext *quickLookTransitionContext;
@property (readonly) UIViewController *presenterViewController;
@property (readonly) QLPreviewController *previewController;
@property (readonly) UIViewController<QLCustomTransitioning> *animatedController;
@property (weak) id <UIViewControllerContextTransitioning> transitionContext;
@property (readonly) id transitionDriver;
@property double duration;
@property unsigned long long transitionState;
@property _Bool showing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)tearDownTransition:(_Bool)arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)_view:(id)arg1 applyFrameFromTransitionContextAsFinalFrame:(_Bool)arg2 isToView:(_Bool)arg3;
- (void)_prepareTimedForcedDismissal;
- (void)_performStartBlockIfNeeded;
- (void)_performForcedDismissal;
- (void)_completeOverlayTransition:(_Bool)arg1;
- (void)_completeBackgroundTransition:(_Bool)arg1;
- (void)_performTransition;
- (void)setUpWithTransitionContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateOverlayTransitionWithProgress:(double)arg1;
- (void)_updateBackgroundTransitionWithProgress:(double)arg1;
- (CDStruct_3ea018b0)_requiredVisualStateTransitions;
- (_Bool)forceDismissalIfNeeded;

@end
