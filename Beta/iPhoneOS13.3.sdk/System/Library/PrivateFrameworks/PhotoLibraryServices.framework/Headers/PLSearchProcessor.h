/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PSIDatabase;

@interface PLSearchProcessor : NSObject

{
    PSIDatabase *_searchIndex;
}

@property (nonatomic, readonly) PSIDatabase *searchIndex;

+ (id)searchProcessorLog;
+ (id)_scoreByCategoryMask;

- (id)initWithDatabase:(id)arg1;
- (void)performQuery:(id)arg1 withResultsHandler:(CDUnknownBlockType)arg2;
- (id)searchResultSectionsForQuery:(id)arg1 withAssetResults:(id)arg2 collectionResults:(id)arg3 combineAssetSections:(_Bool)arg4;
- (id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2;
- (id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(unsigned long long)arg3;
- (id)_alphabeticalSortDescriptors;
- (id)_dateSortDescriptors;
- (id)_numberOfAssetsSortDescriptors;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)arg1;
- (id)_combinedFilenameSearchResultsFromSearchResults:(id)arg1 inQuery:(id)arg2;
- (id)_completionFilenameResultsForFilenameResults:(id)arg1;
- (void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (_Bool)_categoryMaskIsCombinable:(unsigned long long)arg1;
- (_Bool)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1;

@end
