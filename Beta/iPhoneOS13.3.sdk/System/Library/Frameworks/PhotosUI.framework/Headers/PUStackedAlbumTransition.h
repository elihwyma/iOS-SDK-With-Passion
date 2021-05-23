/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUNavigationTransition.h>

@class NSSet, NSString, PHCollection, PUPhotoPinchGestureRecognizer, PUStackedAlbumLayout, PUStackedAlbumTransitionLayout, PUTransitionViewAnimator, UIView, UIViewController;

@protocol PLAssetContainer, PUStackedAlbumControllerTransition, PUStackedAlbumTransitionDelegate;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransition : PUNavigationTransition

{
    struct CGRect _popTransitionInitialVisibleBounds;
    NSSet *_popTransitionInitialVisibleStackedAssetIndexPaths;
    UIView *_animatorView;
    _Bool _didAnimateRoundedCorners;
    _Bool _isExpanding;
    _Bool _isForStandInAlbum;
    _Bool _forFolder;
    id <PLAssetContainer> _photoCollection;
    PHCollection *_ph_photoCollection;
    id <PUStackedAlbumTransitionDelegate> _delegate;
    PUStackedAlbumLayout *__transitionLayout;
    PUStackedAlbumTransitionLayout *__interactiveTransitionLayout;
    PUTransitionViewAnimator *__transitionViewAnimator;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    id __disableToken;
    struct CGPoint _interactionCenter;
}

@property (nonatomic, setter=_setExpanding:) _Bool isExpanding;
@property (weak, nonatomic, setter=_setTransitionLayout:) PUStackedAlbumLayout *_transitionLayout;
@property (retain, nonatomic, setter=_setInteractiveTransitionLayout:) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout;
@property (retain, nonatomic, setter=_setTransitionViewAnimator:) PUTransitionViewAnimator *_transitionViewAnimator;
@property (retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
@property (retain, nonatomic, setter=_setDisableToken:) id _disableToken;
@property (nonatomic, readonly) UIViewController<PUStackedAlbumControllerTransition> *fromViewController;
@property (nonatomic, readonly) UIViewController<PUStackedAlbumControllerTransition> *toViewController;
@property (retain, nonatomic) id <PLAssetContainer> photoCollection;
@property (retain, nonatomic, setter=ph_setPhotoCollection:) PHCollection *ph_photoCollection;
@property (weak, nonatomic) id <PUStackedAlbumTransitionDelegate> delegate;
@property (nonatomic, setter=setForStandInAlbum:) _Bool isForStandInAlbum;
@property (nonatomic, getter=isForFolder) _Bool forFolder;
@property (nonatomic) struct CGPoint interactionCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(_Bool)arg2;
- (void)animatePushTransition;
- (void)animatePopTransition;
- (void)completeInteractiveOperation:(long long)arg1 finished:(_Bool)arg2;
- (void)collectionViewLayout:(id)arg1 willSupplyLayoutAttributes:(id)arg2;
- (_Bool)collectionViewLayoutShouldProvideCustomAnimations:(id)arg1;
- (id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg1 collectionView:(id)arg2;
- (id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg1 otherLayout:(id)arg2 forPush:(_Bool)arg3;
- (id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 isExpanding:(_Bool)arg2;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;

@end
