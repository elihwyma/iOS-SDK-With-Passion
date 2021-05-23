/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationDialogPresentationController : UIPresentationController

{
    UIVisualEffectView *_backdropView;
    CDUnknownBlockType _completedAnimationBlock;
    struct CGSize _modalSize;
}

@property (nonatomic, readonly) UIVisualEffectView *backdropView;
@property (nonatomic) struct CGSize modalSize;
@property (copy, nonatomic) CDUnknownBlockType completedAnimationBlock;

- (void)dealloc;
- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)_tapGesture:(id)arg1;
- (void)_layoutPresentedView;

@end
