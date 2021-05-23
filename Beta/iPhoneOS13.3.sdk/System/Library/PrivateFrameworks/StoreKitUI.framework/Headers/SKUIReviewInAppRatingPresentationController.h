/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIPresentationController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingPresentationController : UIPresentationController <Swift>

{
    _Bool _constraintsPrepared;
    UIView *_dimmingView;
}

@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) _Bool constraintsPrepared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_prepareDimmingViewIfNecessary;
- (void)_prepareConstraintsIfNecessary;
- (void)containerViewDidLayoutSubviews;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;

@end
