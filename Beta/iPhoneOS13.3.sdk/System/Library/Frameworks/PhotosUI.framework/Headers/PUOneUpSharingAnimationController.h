/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/_UISheetAnimationController.h>

@class NSString, PUOneUpPhotosSharingTransitionContext, UIViewController;

@protocol PUOneUpAssetTransitionViewController, PUOneUpSharingAnimationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpSharingAnimationController : _UISheetAnimationController

{
    _Bool _interruptibleAnimatorForTransitionWasCalled;
    PUOneUpPhotosSharingTransitionContext *_oneUpTransitionContext;
    UIViewController<PUOneUpAssetTransitionViewController> *_presentingViewController;
    id <PUOneUpSharingAnimationControllerDelegate> _delegate;
}

@property (nonatomic, readonly) PUOneUpPhotosSharingTransitionContext *oneUpTransitionContext;
@property (weak, nonatomic, readonly) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController;
@property (weak, nonatomic) id <PUOneUpSharingAnimationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (id)initWithTransitionContext:(id)arg1 presentingViewController:(id)arg2;
- (void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg1 inTransitioningView:(id)arg2;
- (void)_configurePhotoView:(id)arg1 withContentHelper:(id)arg2;

@end
