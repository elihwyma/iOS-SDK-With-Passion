/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXSearchResultsDataUtility : NSObject

+ (id)fetchResultFromTopAssetsSearchResult:(id)arg1;
+ (id)photosDetailsContextFromCollectionUUID:(id)arg1 collectionClass:(Class)arg2 dateRangeFormatter:(id)arg3;
+ (id)photosDetailsContextFromMemoryUUID:(id)arg1;
+ (id)photosDetailsContextForPhotosUUIDs:(id)arg1 title:(id)arg2;
+ (id)_localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long *)arg2 dateRangeFormatter:(id)arg3;
+ (id)searchTokenRepresentedObjectsFromSearchTokens:(id)arg1;
+ (id)searchTokenRepresentedObjectFromSearchText:(id)arg1;
+ (id)searchTokenFromQueryToken:(id)arg1;
+ (id)searchTokenFromWordEmbedding:(id)arg1;
+ (void)suggestionsDisplayDataFromToken:(id)arg1 searchText:(id)arg2 matchedColor:(struct UIColor *)arg3 remainingColor:(struct UIColor *)arg4 isTextCompletion:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (struct UIImage *)imageForSearchUserCategory:(unsigned long long)arg1 useSearchFieldStyle:(_Bool)arg2;
+ (id)_macOSImageNameForSearchUserCategory:(unsigned long long)arg1 useSearchFieldStyle:(_Bool)arg2;
+ (id)recentSearchFromActiveSearch:(id)arg1;
+ (id)titleForSearchResult:(id)arg1;
+ (id)subtitleForSearchResult:(id)arg1;
+ (id)wordEmbeddingSubstitutionsForSearchText:(id)arg1 wantsSubstitutedString:(_Bool)arg2 sceneAncestoryInformation:(id)arg3 substitutions:(id)arg4;
+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg1 sceneAncestoryInformation:(id)arg2;
+ (id)sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg1;
+ (id)stringWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 dateComponents:(id)arg4 dateIntervalFormatter:(id)arg5;
+ (id)sectionTitleFromSearchResultSection:(id)arg1 shouldCombineAssetsSections:(_Bool)arg2;
+ (_Bool)sectionIsHighlightsSection:(id)arg1;
+ (id)searchTokensFromSiriSearchRequest:(id)arg1;

@end
