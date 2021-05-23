/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <Swift>

{
    PHFetchResult *_collectionsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_collectionsFetchResult;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (id)momentsInCollectionList:(id)arg1;
- (struct __CFString *)aggregateLevelKey;
- (id)newCollectionViewLayout;
- (id)renderedStripsElementKind;
- (id)sectionHeaderElementKind;
- (long long)maxRowsPerSection;
- (struct CGSize)thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)imageRequestItemSize;
- (long long)cellFillMode;
- (void)_getDataForVisualSection:(long long)arg1 title:(id *)arg2 locations:(id *)arg3 startDate:(id *)arg4 endDate:(id *)arg5;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (void)getPhotosDataSource:(id *)arg1 displayTitleInfo:(id *)arg2 forDetailsForVisualSection:(long long)arg3;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (long long)imageDeliveryMode;
- (double)cellAspectRatioHint;
- (_Bool)supportsIncrementalChangeNotifications;
- (void)modelDidChange:(id)arg1;

@end
