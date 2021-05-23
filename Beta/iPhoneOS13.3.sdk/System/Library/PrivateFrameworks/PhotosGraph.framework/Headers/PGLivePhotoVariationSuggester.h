/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@class NSArray, NSDictionary, NSEnumerator, NSMutableDictionary, NSString, PGSuggestionOptions;

@interface PGLivePhotoVariationSuggester

{
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
    NSDictionary *_variationResults;
    NSMutableDictionary *_recipeReasonByAssetLocalIdentifier;
    _Bool _doLoop;
    _Bool _doLongExposure;
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
- (void)_setDoFlagsWithOptions:(id)arg1;
- (id)recipeForVariationWithLivePhoto:(id)arg1 inResults:(id)arg2 suggestionSubtype:(unsigned short *)arg3;
- (id)livePhotosBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)suggestionWithAsset:(id)arg1;

@end
