/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PHAssetResourceQualityClass, PHCachingImageManager, PUGridRenderedStrip, PUMomentsZoomLevelManager, PUSectionedGridLayout, PUZoomableGridViewController;

__attribute__((visibility("hidden")))
@interface PUGridZoomLevelInfo : NSObject <Swift>

{
    PUGridRenderedStrip *_currentRenderedStrip;
    _Bool _useFloatingHeaderGroupName;
    _Bool _summarizeSections;
    PHCachingImageManager *_cachingImageManager;
    PUSectionedGridLayout *_collectionViewLayout;
    unsigned long long _zoomLevel;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    PUGridZoomLevelInfo *_baseZoomLevelInfo;
    PUZoomableGridViewController *_zoomableGridViewController;
    double _pendingContentWidth;
    PHAssetResourceQualityClass *_qualityClass;
    long long _maxRowsPerSection;
    struct CGSize _thumbnailImageSize;
    struct CGSize _lastItemPixelSize;
}

@property (nonatomic) PUZoomableGridViewController *zoomableGridViewController;
@property (nonatomic, readonly) NSString *renderedStripsElementKind;
@property (nonatomic, readonly) NSString *sectionHeaderElementKind;
@property (nonatomic, readonly) struct CGSize thumbnailImageSize;
@property (nonatomic, readonly) double itemContentScale;
@property (nonatomic, readonly) struct __CFString *aggregateLevelKey;
@property (nonatomic) _Bool useFloatingHeaderGroupName;
@property (nonatomic, readonly) struct CGSize thumbnailImageSize;
@property (nonatomic, readonly) unsigned long long zoomLevel;
@property (nonatomic, readonly) PUMomentsZoomLevelManager *zoomLevelManager;
@property (nonatomic, readonly) PUGridZoomLevelInfo *baseZoomLevelInfo;
@property (nonatomic, readonly) PUZoomableGridViewController *zoomableGridViewController;
@property (nonatomic, readonly) PUSectionedGridLayout *collectionViewLayout;
@property (nonatomic) double pendingContentWidth;
@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (retain, nonatomic) PHAssetResourceQualityClass *qualityClass;
@property (nonatomic) struct CGSize lastItemPixelSize;
@property (nonatomic, readonly) long long maxRowsPerSection;
@property (nonatomic) _Bool summarizeSections;
@property (nonatomic, readonly) double zoomInDuration;
@property (nonatomic, readonly) double zoomOutDuration;
@property (nonatomic, readonly) unsigned long long dateRangeFormatterPreset;
@property (nonatomic, readonly) struct CGSize imageRequestItemSize;
@property (nonatomic, readonly) long long cellFillMode;
@property (nonatomic, readonly) _Bool supportsCollectionViewDragSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didTapHeaderView:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(_Bool)arg2;
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(_Bool)arg2;
- (long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (struct CGPoint)sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint)arg2;
- (_Bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;
- (_Bool)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (id)newCollectionViewLayout;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (void)getPhotosDataSource:(id *)arg1 displayTitleInfo:(id *)arg2 forDetailsForVisualSection:(long long)arg3;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (long long)imageDeliveryMode;
- (double)cellAspectRatioHint;
- (_Bool)supportsIncrementalChangeNotifications;
- (void)modelDidChange:(id)arg1;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (_Bool)configureGridCell:(id)arg1 forIndexPath:(id)arg2;
- (_Bool)wantsMagnifierNavigation;
- (_Bool)wantsAssetCountsVisible;
- (_Bool)wantsCloudStatusVisible;
- (_Bool)wantsAutomaticContentOffsetAdjustment;
- (_Bool)supportsEditMode;
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)didFinishZoomLevelTransition;
- (void)renderedStrip:(id)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)renderedStrip:(id)arg1 imageDataForAsset:(id)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)updateForSizeChangeIfNecessary;
- (void)willAnimateSizeTransition;
- (void)registerReusableViewClassesForCollectionView:(id)arg1;
- (void)_updateBackdropGroupNameForHeaderView:(id)arg1;
- (void)willShowMagnifiedViewController:(id)arg1;
- (void)pushPhotosDetailsViewForVisualSection:(long long)arg1 animated:(_Bool)arg2;
- (id)imageDataForAsset:(id)arg1 itemContentScale:(double)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (unsigned long long)_detailViewSourceOriginWithZoomLevel:(unsigned long long)arg1;
- (_Bool)shouldUseDynamicLayout;

@end
