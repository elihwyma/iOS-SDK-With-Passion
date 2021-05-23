/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@class NSArray, NSEnumerator, NSMutableSet, NSString, PGSuggestionOptions;

@interface PGRecentSocialGroupCentricSuggester

{
    PGSuggestionOptions *_options;
    NSArray *_allPotentialSuggestions;
    NSMutableSet *_usedPotentialSuggestions;
    NSArray *_longTimeNoSeeSocialGroupPotentialSuggestions;
    NSArray *_socialGroupPotentialSuggestions;
    NSEnumerator *_longTimeNoSeeSocialGroupPotentialSuggestionEnumerator;
    NSEnumerator *_socialGroupPotentialSuggestionEnumerator;
    NSArray *_eligibleAssets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)suggestionTypes;
+ (id)suggestionSubtypes;

- (void)reset;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)nextSuggestion;
- (id)longTimeNoSeeSocialGroupPotentialSuggestionsWithOptions:(id)arg1;
- (id)socialGroupPotentialSuggestionsWithOptions:(id)arg1;
- (id)nextLongTimeNoSeeSocialGroupPotentialSuggestion;
- (id)nextSocialGroupPotentialSuggestion;
- (id)potentialSuggestionsWithOptions:(id)arg1;
- (id)verifiedPersons;
- (id)assetsWithPersonsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)assetsMatchingSocialGroup:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3;
- (void)usePotentialSuggestions:(id)arg1;

@end
