/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHCachingImageManager, PHImageRequestOptions, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceManager, PXCMMWorkflowCoordinator, PXDebugCMMSuggestionCollectionViewCell, UIView, _PXCMMSizingSuggestion;

@protocol PXDebugCMMSuggestionsDelegate;

@interface PXDebugCMMSuggestionsCollectionViewController : UICollectionViewController <Swift>

{
    struct CGSize _lastUpdateReferenceSize;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
    UIView *_emptyPlaceholderView;
    PXDebugCMMSuggestionCollectionViewCell *_sizingCell;
    _PXCMMSizingSuggestion *_sizingSuggestion;
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    id <PXDebugCMMSuggestionsDelegate> _suggestionsDelegate;
    PXCMMSuggestionsDataSource *_dataSource;
    PHCachingImageManager *_cachingImageManager;
    PHImageRequestOptions *_imageRequestOptions;
}

@property (retain, nonatomic) PXCMMSuggestionsDataSource *dataSource;
@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic, readonly) PHImageRequestOptions *imageRequestOptions;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id <PXDebugCMMSuggestionsDelegate> suggestionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;
- (id)initWithDataSourceManager:(id)arg1 scrollDirection:(long long)arg2;
- (void)_updateCollectionViewLayout;
- (void)_updateEmptyPlaceholderView;
- (_Bool)_dataSourceIsEmpty;
- (void)_configureGadgetView:(id)arg1 forSuggestion:(id)arg2;
- (double)_suggestionCellWidth;

@end
