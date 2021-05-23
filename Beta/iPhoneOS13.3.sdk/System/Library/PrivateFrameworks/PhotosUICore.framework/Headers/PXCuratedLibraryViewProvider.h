/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHPhotoLibrary, PXAssetReference, PXCuratedLibraryAssetsDataSourceManager, PXCuratedLibraryFooterController, PXCuratedLibraryItemCountsController, PXCuratedLibraryLayout, PXCuratedLibraryVideoPlaybackController, PXCuratedLibraryViewModel, PXExtendedTraitCollection, PXGView, PXSectionedObjectReference, PXUIMediaProvider;

@protocol PXCuratedLibraryEventLogger;

@interface PXCuratedLibraryViewProvider : NSObject

{
    PHPhotoLibrary *_photoLibrary;
    PXExtendedTraitCollection *_extendedTraitCollection;
    PXGView *_gridView;
    PXCuratedLibraryLayout *_layout;
    PXCuratedLibraryViewModel *_viewModel;
    PXUIMediaProvider *_mediaProvider;
    PXCuratedLibraryAssetsDataSourceManager *_assetsDataSourceManager;
    PXCuratedLibraryVideoPlaybackController *_videoPlaybackController;
    PXCuratedLibraryItemCountsController *_itemCountsController;
    PXCuratedLibraryFooterController *_footerController;
    id <PXCuratedLibraryEventLogger> _eventLogger;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) PXGView *gridView;
@property (nonatomic, readonly) PXCuratedLibraryLayout *layout;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, readonly) PXCuratedLibraryVideoPlaybackController *videoPlaybackController;
@property (nonatomic, readonly) PXCuratedLibraryItemCountsController *itemCountsController;
@property (nonatomic, readonly) PXCuratedLibraryFooterController *footerController;
@property (nonatomic, readonly) id <PXCuratedLibraryEventLogger> eventLogger;
@property (nonatomic, readonly) PXAssetReference *preferredAnchorAssetReference;
@property (nonatomic, readonly) PXSectionedObjectReference *preferredObjectReferenceToScrollToWhenRestoringState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)additionalRectDiagnosticsProvidersForView:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 extendedTraitCollection:(id)arg2;
- (void)_stopLibraryViewScrolling;
- (void)scrollLibraryViewToAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrollLibraryViewToObjectReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)hitTestResultControlsForCurrentZoomLevel;
- (id)_itemsGeometryForDataSource:(id)arg1;
- (struct PXSimpleIndexPath)_indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (_Bool)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (struct PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 coordinateSpace:(id)arg2;

@end
