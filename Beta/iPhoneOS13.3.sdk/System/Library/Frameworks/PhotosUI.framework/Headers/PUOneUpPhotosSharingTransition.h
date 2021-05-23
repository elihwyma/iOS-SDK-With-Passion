/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUModalTransition.h>

@class NSString, PUOneUpPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController;

@protocol PUOneUpAssetTransitionViewController, PUOneUpPhotosSharingTransitionDelegate, PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController;

@interface PUOneUpPhotosSharingTransition : PUModalTransition

{
    UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *_sharingTransitionViewController;
    UIViewController<PUOneUpAssetTransitionViewController> *_presentingViewController;
    PUOneUpPhotosSharingTransitionContext *_oneUpPhotosSharingTransitionContext;
    id <PUOneUpPhotosSharingTransitionDelegate> _delegate;
    UICollectionViewLayout *__transitionLayout;
}

@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout;
@property (weak, nonatomic) UIViewController<PUOneUpPhotosSharingTransitionViewController><PUOneUpAssetTransitionViewController> *sharingTransitionViewController;
@property (weak, nonatomic) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController;
@property (retain, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpPhotosSharingTransitionContext;
@property (weak, nonatomic) id <PUOneUpPhotosSharingTransitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animatePresentTransition;
- (void)animateDismissTransition;

@end
