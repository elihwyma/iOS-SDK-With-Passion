/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@class NSMutableArray, NSString, PXCuratedLibraryAssetsDataSourceManager, PXGView, UIViewController;

@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService

{
    PXGView *_gridView;
    UIViewController *_viewController;
    PXCuratedLibraryAssetsDataSourceManager *_dataSourceManager;
    NSMutableArray *_images;
    NSMutableArray *_imageURLs;
    struct CGRect _lastScrollViewBounds;
}

@property (nonatomic, readonly) PXGView *gridView;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) NSMutableArray *imageURLs;
@property (nonatomic) struct CGRect lastScrollViewBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_writeImageToDisk:(id)arg1 suffix:(id)arg2;
+ (id)_mergeImagesFromArray:(id)arg1;
+ (id)_createPDFWithImagesAtURLs:(id)arg1;
+ (id)_cropRect:(struct CGRect)arg1 fromImage:(id)arg2;
+ (id)_snapshotImageFromView:(id)arg1;
+ (id)_imageAtURL:(id)arg1;

- (id)title;
- (void)performAction;
- (id)initWithItemProviders:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (_Bool)canPerformAction;
- (void)_captureNextPage;
- (void)_stopCapture;
- (void)_mergeAllImagesAndWriteToDisk;

@end
