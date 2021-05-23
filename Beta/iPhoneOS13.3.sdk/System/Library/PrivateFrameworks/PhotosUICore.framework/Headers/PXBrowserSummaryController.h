/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSAttributedString, NSDateFormatter, NSDateInterval, NSDateIntervalFormatter, NSDictionary, NSObject, NSString, PXInfoUpdater, PXSelectedItemsStack;

@protocol OS_dispatch_queue, PXBrowserSelectionSnapshot, PXBrowserSummaryControllerDataSource;

@interface PXBrowserSummaryController : PXObservable

{
    struct {
        _Bool containerTitle;
        _Bool localizedContainerItemsCount;
        _Bool containerDateInterval;
        _Bool selectionSnapshot;
        _Bool filteringContainerContent;
        _Bool attributedPrimaryTitle;
        _Bool secondaryTitle;
        _Bool tertiaryTitle;
        _Bool navigationTitle;
        _Bool attributedSelectionTitle;
        _Bool stackedAssets;
    } _needsUpdateFlags;
    struct {
        _Bool containerTitle;
        _Bool localizedContainerItemsCount;
        _Bool containerDateInterval;
        _Bool visibleContentSnapshot;
        _Bool selectionSnapshot;
        _Bool filteringContainerContent;
        _Bool useAssetImportDate;
    } _dataSourceRespondsTo;
    _Bool _shouldUseSubtitles;
    _Bool _shouldUseNavigationTitle;
    _Bool _shouldUseAbbreviatedDates;
    _Bool _shouldShowLocationNames;
    _Bool _ready;
    _Bool _filteringContainerContent;
    NSDictionary *_defaultAttributes;
    NSDictionary *_emphasizedAttributes;
    NSDictionary *_selectionAttributes;
    id <PXBrowserSummaryControllerDataSource> _dataSource;
    NSAttributedString *_attributedPrimaryTitle;
    NSString *_secondaryTitle;
    NSString *_tertiaryTitle;
    NSString *_navigationTitle;
    NSAttributedString *_attributedSelectionTitle;
    NSArray *_stackedAssets;
    PXInfoUpdater *_visibleMetadataInfoUpdater;
    PXInfoUpdater *_selectionInfoUpdater;
    PXInfoUpdater *_titlesInfoUpdater;
    NSObject<OS_dispatch_queue> *_queue;
    NSDateIntervalFormatter *_dateIntervalFormatter;
    NSDateFormatter *_importDateFormatter;
    NSString *_localizedComponentsSeparator;
    NSString *_containerTitle;
    NSString *_localizedContainerItemsCount;
    NSDateInterval *_containerDateInterval;
    id <PXBrowserSelectionSnapshot> _selectionSnapshot;
    PXSelectedItemsStack *_selectedAssetsStack;
    NSString *_noFilteringResultsPlaceholderText;
}

@property (nonatomic, readonly) PXInfoUpdater *visibleMetadataInfoUpdater;
@property (nonatomic, readonly) PXInfoUpdater *selectionInfoUpdater;
@property (nonatomic, readonly) PXInfoUpdater *titlesInfoUpdater;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDateIntervalFormatter *dateIntervalFormatter;
@property (nonatomic, readonly) NSDateFormatter *importDateFormatter;
@property (nonatomic, readonly) NSString *localizedComponentsSeparator;
@property (copy, nonatomic) NSString *containerTitle;
@property (copy, nonatomic) NSString *localizedContainerItemsCount;
@property (copy, nonatomic) NSDateInterval *containerDateInterval;
@property (retain, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
@property (nonatomic, getter=isFilteringContainerContent) _Bool filteringContainerContent;
@property (copy, nonatomic) NSAttributedString *attributedPrimaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *tertiaryTitle;
@property (copy, nonatomic) NSString *navigationTitle;
@property (copy, nonatomic) NSAttributedString *attributedSelectionTitle;
@property (retain, nonatomic) PXSelectedItemsStack *selectedAssetsStack;
@property (copy, nonatomic) NSArray *stackedAssets;
@property (nonatomic, getter=isReady) _Bool ready;
@property (nonatomic, readonly) NSString *noFilteringResultsPlaceholderText;
@property (weak, nonatomic) id <PXBrowserSummaryControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldUseSubtitles;
@property (nonatomic) _Bool shouldUseNavigationTitle;
@property (nonatomic) _Bool shouldUseAbbreviatedDates;
@property (nonatomic) _Bool shouldShowLocationNames;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (copy, nonatomic) NSDictionary *emphasizedAttributes;
@property (copy, nonatomic) NSDictionary *selectionAttributes;

- (id)init;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)performBlockWhenDoneUpdating:(CDUnknownBlockType)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (void)invalidateContainerTitle;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateContainerDateInterval;
- (void)invalidateVisibleContent;
- (void)invalidateSelection;
- (void)invalidateFilteringContainerContent;
- (void)_invalidateContainerTitle;
- (void)_updateContainerTitleIfNeeded;
- (void)_invalidateLocalizedContainerItemsCount;
- (void)_updateLocalizedContainerItemsCountIfNeeded;
- (void)_invalidateContainerDateInterval;
- (void)_updateContainerDateIntervalIfNeeded;
- (void)_invalidateSelectionSnapshot;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)_invalidateFilteringContainerContent;
- (void)_updateFilteringContainerContentIfNeeded;
- (void)_invalidateTitles;
- (id)_requestTitlesInfoWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_invalidateAttributedSelectionTitle;
- (void)_updateAttributedSelectionTitleIfNeeded;
- (void)_invalidateStackedAssets;
- (void)_updateStackedAssetsIfNeeded;

@end
