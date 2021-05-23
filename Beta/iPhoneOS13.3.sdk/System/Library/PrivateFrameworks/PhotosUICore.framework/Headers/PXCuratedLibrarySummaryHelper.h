/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXBrowserSummaryController;

@protocol PXDisplayAssetCollection, PXLibrarySummaryDataSource, PXLibrarySummaryOutputPresenter;

@interface PXCuratedLibrarySummaryHelper : NSObject <Swift>

{
    _Bool _isPerformingUpdates;
    _Bool _isPerformingChanges;
    struct {
        _Bool title;
        _Bool subtitle;
        _Bool topmostAssetCollection;
    } _needsUpdateFlags;
    struct {
        _Bool visibleContentSnapshot;
        _Bool topmostAssetCollection;
    } _dataSourceRespondsTo;
    struct {
        _Bool setTitle;
        _Bool setSubtitle;
        _Bool setAttributedTitle;
        _Bool defaultAttributes;
        _Bool emphasizedAttributes;
    } _outputPresenterRespondsTo;
    _Bool _shouldUseAbbreviatedDates;
    id <PXLibrarySummaryDataSource> _dataSource;
    id <PXLibrarySummaryOutputPresenter> _outputPresenter;
    PXBrowserSummaryController *_summaryController;
    id <PXDisplayAssetCollection> _topmostAssetCollection;
}

@property (nonatomic, readonly) PXBrowserSummaryController *summaryController;
@property (retain, nonatomic, setter=_setTopmostAssetCollection:) id <PXDisplayAssetCollection> topmostAssetCollection;
@property (weak, nonatomic) id <PXLibrarySummaryDataSource> dataSource;
@property (weak, nonatomic) id <PXLibrarySummaryOutputPresenter> outputPresenter;
@property (nonatomic) _Bool shouldUseAbbreviatedDates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldShowImportDates;

- (id)init;
- (void)_updateTitle;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)_updateSubtitle;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)arg1;
- (void)visibleContentDidChange;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_invalidateTitle;
- (void)_invalidateSubtitle;
- (void)_invalidateTopmostAssetCollection;
- (void)_updateTitleFromSummaryController;
- (void)_updateSubtitleFromSummaryController;
- (void)_updateTopmostAssetCollection;

@end
