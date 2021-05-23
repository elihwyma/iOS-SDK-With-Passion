/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewController.h>

@class PHAssetCollection, PUPhotosPanoramaViewControllerSpec, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController

{
    PUPhotosPanoramaViewControllerSpec *_panoramaSpec;
    PHAssetCollection *_userPanoAlbum;
}

@property (nonatomic, readonly) PUSectionedGridLayout *mainGridLayout;
@property (retain, nonatomic) PHAssetCollection *userPanoAlbum;
@property (retain, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaSpec;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSpec:(id)arg1;
- (id)newGridLayout;
- (_Bool)updateSpec;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (_Bool)wantsGlobalFooter;
- (long long)cellFillMode;
- (_Bool)canBeginStackCollapseTransition;
- (void)updateLayoutMetrics;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)maximumThumbnailRequestSize;
- (void)_configureCollectionViewGridLayout:(id)arg1;
- (void)updatePhotoViewContent:(id)arg1 withThumbnailImage:(id)arg2;
- (void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2;

@end
