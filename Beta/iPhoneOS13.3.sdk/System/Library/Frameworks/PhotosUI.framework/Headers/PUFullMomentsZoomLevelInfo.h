/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUFullMomentsZoomLevelInfo : PUGridZoomLevelInfo <Swift>

{
    PUGridZoomLevelInfo *_transitionOtherLevelInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(_Bool)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (struct __CFString *)aggregateLevelKey;
- (id)newCollectionViewLayout;
- (id)sectionHeaderElementKind;
- (struct CGSize)thumbnailImageSize;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)imageRequestItemSize;
- (long long)cellFillMode;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (void)getPhotosDataSource:(id *)arg1 displayTitleInfo:(id *)arg2 forDetailsForVisualSection:(long long)arg3;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (_Bool)supportsIncrementalChangeNotifications;
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
- (void)_prepareTransitionSubviewsForCell:(id)arg1 atIndexPath:(id)arg2 isAppearing:(_Bool)arg3;
- (void)_prepareTransitionImageContentForCell:(id)arg1 atIndexPath:(id)arg2 appearingZoomLevelInfo:(id)arg3;
- (struct UIEdgeInsets)_fillerViewInsetsForItemAtIndexPath:(id)arg1;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(_Bool *)arg2 locations:(id *)arg3 title:(id *)arg4 startDate:(id *)arg5 endDate:(id *)arg6;

@end
