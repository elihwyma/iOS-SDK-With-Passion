/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@class NSArray, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGRecentEditSuggester

{
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)suggestionTypes;
+ (id)suggestionSubtypes;

- (void)reset;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)reasonsForSuggestion:(id)arg1;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)nextSuggestion;
- (id)suggestedAssetsInAssets:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2;
- (id)editedAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)compositionControllerForAsset:(id)arg1;

@end
