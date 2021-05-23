/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSDate, NSString, PHPhotoLibrary, PXExtendedTraitCollection, PXMemoriesFeedDataSourceManager, PXMemoriesFeedScrollFilter, PXMemoriesFeedTilingLayout, PXMemoriesFeedTransitionAnimationCoordinator, PXMemoriesSpec, PXMemoriesSpecManager, PXScrollViewController, PXSectionedLayoutEngine, PXSectionedObjectReference, PXSectionedSelectionManager, PXTilingController;

@protocol PXMemoriesFeedViewControllerHelperDelegate;

@interface PXMemoriesFeedViewControllerHelper : PXObservable <Swift>

{
    struct {
        _Bool layoutEngine;
    } _needsToUpdate;
    struct {
        _Bool feedIsVisible;
        _Bool reloadedTileKindsOnObjectChanged;
        _Bool configureMetrics;
    } _delegateRespondsTo;
    id _refreshResetNotification;
    _Bool _hasAppeared;
    _Bool _hasKickedOffBatchGeneration;
    _Bool __requestingNewMemories;
    PXTilingController *_tilingController;
    PXMemoriesFeedDataSourceManager *_dataSourceManager;
    PXMemoriesSpecManager *_specManager;
    PXSectionedSelectionManager *_selectionManager;
    PHPhotoLibrary *_photoLibrary;
    PXScrollViewController *_scrollViewController;
    PXExtendedTraitCollection *_traitCollection;
    id <PXMemoriesFeedViewControllerHelperDelegate> _delegate;
    PXSectionedObjectReference *_highlightedMemoryReference;
    PXSectionedObjectReference *_activatedMemoryReference;
    PXSectionedObjectReference *_lastActionPresentationMemoryReference;
    NSString *_scrollTargetMemoryUUID;
    NSDate *__lastUserMemoryGenerationRequestDate;
    PXSectionedObjectReference *__memoryReferenceToScrollToVisible;
    PXSectionedObjectReference *_anchorMemoryReference;
    PXSectionedLayoutEngine *__layoutEngine;
    PXMemoriesFeedScrollFilter *__scrollFilter;
    PXMemoriesSpec *__spec;
    PXMemoriesFeedTransitionAnimationCoordinator *__transitionAnimationCoordinator;
    long long __refreshRetryCount;
    CDUnknownBlockType __newMemoriesRequestCompletion;
    struct CGPoint _anchorMemoryOrigin;
}

@property (retain, nonatomic, setter=_setLastUserMemoryGenerationRequestDate:) NSDate *_lastUserMemoryGenerationRequestDate;
@property (retain, nonatomic, setter=_setMemoryReferenceToScrollToVisible:) PXSectionedObjectReference *_memoryReferenceToScrollToVisible;
@property (retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference;
@property (nonatomic, setter=_setAnchorMemoryOrigin:) struct CGPoint anchorMemoryOrigin;
@property (nonatomic, readonly) PXSectionedLayoutEngine *_layoutEngine;
@property (nonatomic, readonly) PXMemoriesFeedScrollFilter *_scrollFilter;
@property (retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec;
@property (nonatomic, readonly) PXMemoriesFeedTransitionAnimationCoordinator *_transitionAnimationCoordinator;
@property (nonatomic, setter=_setRefreshRetryCount:) long long _refreshRetryCount;
@property (nonatomic, getter=_isRequestingNewMemories, setter=_setRequestingNewMemories:) _Bool _requestingNewMemories;
@property (copy, nonatomic, setter=_setNewMemoriesRequestCompletion:) CDUnknownBlockType _newMemoriesRequestCompletion;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) PXMemoriesFeedDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXMemoriesSpecManager *specManager;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (weak, nonatomic) id <PXMemoriesFeedViewControllerHelperDelegate> delegate;
@property (nonatomic, readonly) PXMemoriesFeedTilingLayout *currentLayout;
@property (nonatomic, readonly) PXMemoriesFeedTilingLayout *targetLayout;
@property (retain, nonatomic) PXSectionedObjectReference *highlightedMemoryReference;
@property (retain, nonatomic) PXSectionedObjectReference *activatedMemoryReference;
@property (retain, nonatomic) PXSectionedObjectReference *lastActionPresentationMemoryReference;
@property (retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepare;
- (_Bool)_needsUpdate;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)_updateIfNeeded;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (void)_configureLayout:(id)arg1;
- (void)_updateLayoutEngineIfNeeded;
- (void)_handleDataSourceChange;
- (struct CGRect)memoriesFeedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (id)memoriesFeedTilingLayout:(id)arg1 titleFontNameForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)scrollFilterShouldRequestAdditionalContent:(id)arg1;
- (void)layoutEngine:(id)arg1 willGenerateLayoutWithGenerator:(id)arg2 forSection:(unsigned long long)arg3;
- (void)layoutEngineDidUpdateLayoutSnapshot:(id)arg1;
- (id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 tilingControllerConfigurationBlock:(CDUnknownBlockType)arg4;
- (id)initWithScrollViewController:(id)arg1 photoLibrary:(id)arg2 traitCollection:(id)arg3 memoriesStyle:(unsigned long long)arg4 tilingControllerConfigurationBlock:(CDUnknownBlockType)arg5;
- (void)_handleChangeFromDataSource:(id)arg1 toDataSource:(id)arg2 withChangeDetails:(id)arg3;
- (_Bool)canRequestNewMemoriesForReason:(unsigned long long)arg1;
- (_Bool)canRequestNewMemories;
- (void)requestNewMemoriesForReason:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestNewMemoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)didChangeTilingControllerLayout;
- (id)memoryObjectReferenceInScrollViewAtPoint:(struct CGPoint)arg1;
- (id)memoryInfoInScrollViewAtPoint:(struct CGPoint)arg1;
- (id)memoryInfoForMemoryObjectReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForMemoryInScrollViewAtPoint:(struct CGPoint)arg1;
- (id)memoryInfoAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForMemoryObjectReference:(id)arg1;
- (void)feedViewControllerWillLayoutSubviews;
- (void)feedViewControllerDidAppear:(_Bool)arg1;
- (void)feedViewControllerDidDisappear;
- (void)invalidateMetrics;
- (void)_generateMemoriesForReason:(unsigned long long)arg1 contextualMemoriesSettings:(id)arg2;
- (void)_generateMemoriesForReason:(unsigned long long)arg1;
- (void)_startRefreshForReason:(unsigned long long)arg1;
- (void)_handleRefreshCompletionWithResultInformation:(id)arg1 reason:(unsigned long long)arg2 error:(id)arg3;
- (void)_handleFinishedRequestingNewMemoriesWithSuccess:(_Bool)arg1 reason:(unsigned long long)arg2 error:(id)arg3;
- (id)_memoryReferenceInsertedOnChangeToDataSource:(id)arg1 withChangeDetails:(id)arg2;
- (void)_enumerateInsertedItemsInChangeDetails:(id)arg1 withDataSource:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_invalidateLayoutEngine;
- (void)_configureMetrics:(id)arg1;
- (void)scrollMemoryReferenceToVisible:(id)arg1 animated:(_Bool)arg2;
- (void)saveAnchorMemory;
- (void)_updateSelectedIndexPathsInLayout;
- (void)_updateSelectedIndexPathsInLayout:(id)arg1;
- (void)_updateHighlightedIndexPathInLayout;
- (void)_updateHighlightedIndexPathInLayout:(id)arg1;
- (void)_handleTraitCollectionChange:(unsigned long long)arg1;
- (void)_handleNewLayoutSnapshot:(id)arg1;
- (void)_scrollToTargetMemoryUUIDWhenReady:(id)arg1;

@end
