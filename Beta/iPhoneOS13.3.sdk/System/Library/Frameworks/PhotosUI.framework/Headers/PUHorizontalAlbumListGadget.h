/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXHorizontalCollectionGadget.h>

@class NSString, NSUserActivity, PUAlbumDropSessionController, PUAlbumListViewControllerSpec, PUAlbumsGadgetProvider, PUPhotoPinchGestureRecognizer, PUSessionInfo;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget

{
    PUAlbumsGadgetProvider *_provider;
    PUSessionInfo *_sessionInfo;
    PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer;
    PUAlbumDropSessionController *_dropSessionController;
    NSUserActivity *_siriActionActivity;
}

@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) PUAlbumDropSessionController *dropSessionController;
@property (nonatomic, readonly) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (nonatomic, readonly) PUAlbumsGadgetProvider *provider;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_handlePinch:(id)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (unsigned long long)gadgetType;
- (unsigned long long)accessoryButtonType;
- (id)accessoryButtonTitle;
- (void)setGadgetSpec:(id)arg1;
- (id)px_gridPresentation;
- (void)_updateCollectionViewLayout;
- (_Bool)canNavigateToCollection:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forPHCollection:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forCollection:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg1;
- (id)initWithAlbumsGadgetProvider:(id)arg1;
- (_Bool)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1;
- (void)_navigateToCollection:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
