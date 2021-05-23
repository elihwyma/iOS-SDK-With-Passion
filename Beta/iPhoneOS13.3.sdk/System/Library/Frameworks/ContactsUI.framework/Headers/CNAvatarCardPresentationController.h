/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIPresentationController.h>

@class CNAvatarCardTransition, UITapGestureRecognizer, UIView, UIViewController, UIVisualEffectView;

@protocol CNCardTransitioning;

__attribute__((visibility("hidden")))
@interface CNAvatarCardPresentationController : UIPresentationController

{
    unsigned int _alignmentEdge;
    UIView *_sourceView;
    double _alignmentY;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_sourceViewController;
    CNAvatarCardTransition *_transition;
    id <CNCardTransitioning> _originalTransitioning;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_vibrancyView;
    UIView *_dimmingView;
    UIView *_cardView;
    UIView *_contentView;
    struct CGRect _sourceTargetRect;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) CNAvatarCardTransition *transition;
@property (retain, nonatomic) id <CNCardTransitioning> originalTransitioning;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGRect sourceTargetRect;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect sourceRect;
@property (nonatomic) double alignmentY;
@property (nonatomic) unsigned int alignmentEdge;

- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentedView;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)_layoutViews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;

@end
