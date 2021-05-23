/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@class NSArray, NSDictionary, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGOutstanderSuggester

{
    PGSuggestionOptions *_options;
    NSDictionary *_assetUUIDsByScore;
    NSArray *_sortedScores;
    long long _currentScoreIndex;
    NSEnumerator *_currentSuggestedAssetEnumerator;
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
- (void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (unsigned long long)scoreWithAsset:(id)arg1;
- (id)nextSuggestedAsset;
- (id)nextSuggestedAssetEnumerator;

@end
