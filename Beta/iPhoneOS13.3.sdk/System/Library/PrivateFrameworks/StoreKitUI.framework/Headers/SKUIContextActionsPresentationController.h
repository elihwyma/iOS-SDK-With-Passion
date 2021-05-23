/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationController : UIPresentationController

{
    UIVisualEffectView *_backgroundView;
    CDUnknownBlockType _dismissalAnimations;
}

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (copy, nonatomic) CDUnknownBlockType dismissalAnimations;

- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;

@end
