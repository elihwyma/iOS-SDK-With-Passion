/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUModalTransition.h>

@class PUPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController;

@protocol PUPhotosSharingTransitionDelegate, PUPhotosSharingTransitionViewController;

@interface PUPhotosSharingTransition : PUModalTransition

{
    UIViewController<PUPhotosSharingTransitionViewController> *_sharingTransitionViewController;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    id <PUPhotosSharingTransitionDelegate> _delegate;
    UICollectionViewLayout *__transitionLayout;
}

@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout;
@property (retain, nonatomic) UIViewController<PUPhotosSharingTransitionViewController> *sharingTransitionViewController;
@property (retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext;
@property (weak, nonatomic) id <PUPhotosSharingTransitionDelegate> delegate;

- (void)animatePresentTransition;
- (void)animateDismissTransition;

@end
