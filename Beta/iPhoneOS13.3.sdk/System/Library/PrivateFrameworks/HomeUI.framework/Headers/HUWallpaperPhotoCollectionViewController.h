/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewController.h>

@class HUWallpaperPhotoCollectionFlowLayout, NAFuture, NSString, PHCachingImageManager, PHFetchResult;

@protocol HUWallpaperPhotoCollectionViewControllerDelegate;

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController

{
    _Bool _initialScrollToBottom;
    id <HUWallpaperPhotoCollectionViewControllerDelegate> _delegate;
    long long _assetCollectionSubtype;
    HUWallpaperPhotoCollectionFlowLayout *_flowLayout;
    PHCachingImageManager *_imageManager;
    PHFetchResult *_assetsFetchResult;
    NAFuture *_imageDownloadFuture;
}

@property (weak, nonatomic) HUWallpaperPhotoCollectionFlowLayout *flowLayout;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (retain, nonatomic) NAFuture *imageDownloadFuture;
@property (nonatomic) _Bool initialScrollToBottom;
@property (weak, nonatomic, readonly) id <HUWallpaperPhotoCollectionViewControllerDelegate> delegate;
@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(long long)arg3 delegate:(id)arg4;
- (id)imageFutureForAsset:(id)arg1 cloudAllowed:(_Bool)arg2;

@end
