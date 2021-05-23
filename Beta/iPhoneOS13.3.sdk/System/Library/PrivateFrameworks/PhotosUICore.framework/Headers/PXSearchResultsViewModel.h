/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, PXSearchResultsSectionedDataSourceManager, PXSearchTopAssetsResult;

@protocol PXSearchResultsLayoutDataSource;

@interface PXSearchResultsViewModel : NSObject

{
    id <PXSearchResultsLayoutDataSource> _delegate;
    unsigned long long _configurationType;
    PXSearchResultsSectionedDataSourceManager *_dataSourceManager;
}

@property (nonatomic) unsigned long long configurationType;
@property (retain, nonatomic) PXSearchResultsSectionedDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) NSArray *attachmentURLs;
@property (nonatomic, readonly) NSArray *wordEmbeddingSubstitutions;
@property (nonatomic, readonly) NSArray *suggestions;
@property (weak, nonatomic) id <PXSearchResultsLayoutDataSource> delegate;
@property (nonatomic, readonly) PXSearchTopAssetsResult *topAssetsSearchResult;

- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)expandSection:(long long)arg1;
- (id)collapseSection:(long long)arg1;
- (long long)numberOfVisibleSearchResultsInSection:(long long)arg1;
- (long long)numberOfSearchResultsInSection:(long long)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (id)allSearchResultsForSection:(long long)arg1;
- (id)initWithSectionedDataSourceManager:(id)arg1 configurationType:(unsigned long long)arg2;
- (id)initWithSearchSectionedDataSource:(id)arg1 configurationType:(unsigned long long)arg2;
- (void)fetchImageForPerson:(id)arg1 targetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)sectionTypeForSection:(long long)arg1;
- (unsigned long long)rowTypeForIndexPath:(id)arg1;
- (long long)startingSectionNumberForType:(unsigned long long)arg1;
- (void)searchResultDataForIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasDisplayableSuggestions;
- (_Bool)sectionIsExpandable:(long long)arg1;
- (_Bool)sectionIsExpanded:(long long)arg1;
- (id)topAssetAtIndexPath:(id)arg1;
- (id)titleForHeaderButtonInSection:(long long)arg1;
- (_Bool)shouldDisplayHeaderViewForSection:(long long)arg1;
- (id)wordEmbeddingForIndexPath:(id)arg1;
- (double)heightForRowType:(unsigned long long)arg1 info:(id)arg2;
- (double)calculatedRowHeightForTopAssets;
- (double)numberOfTopAssetRows;
- (_Bool)topAssetsExistForSection:(long long)arg1;
- (id)suggestionItemForIndexPath:(id)arg1;
- (id)_sugestionForIndexPath:(id)arg1;
- (_Bool)hasNoResults;
- (_Bool)shouldShowTableFooterView;
- (_Bool)_resultsAreWordEmbeddingsOnly;
- (id)_selectedWordEmbeddingTextAtRow:(long long)arg1;
- (_Bool)_sectionIsTopAssetsSection:(long long)arg1;
- (_Bool)isValidSection:(long long)arg1;
- (unsigned long long)_displayableSuggestionCount;
- (id)_adjustedIndexPathForIndexPath:(id)arg1;
- (long long)_adjustedSectionForSection:(long long)arg1;

@end
