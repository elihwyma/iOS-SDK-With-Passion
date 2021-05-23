/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Spotlight/SPGeneralQueryTask.h>

@class NSArray;

@interface SPSuggestionsQueryTask : SPGeneralQueryTask

{
    NSArray *_mutableCombinedSuggestions;
    NSArray *_mutableParsecSuggestions;
    NSArray *_mutableLocalSuggestions;
}

- (id)displayedText;
- (void)searchDaemonSuggestionsArray:(id)arg1;
- (void)searchDaemonLocalSuggestionsData:(id)arg1;
- (id)unsafeSections;
- (_Bool)readyToUpdate;
- (id)unsafeCombinedSuggestions;
- (id)initForSession:(id)arg1 withQuery:(id)arg2;
- (void)clearInternal:(int)arg1 invalidate:(_Bool)arg2;
- (id)suggestionsDebugLog:(id)arg1;
- (id)_originalTopResultFromSections:(id)arg1;
- (id)_appResultSection;
- (id)makeSuggestionsSection;
- (id)searchThroughSection:(id)arg1;
- (id)contactSuggestions:(id)arg1 maxCount:(long long)arg2;
- (id)dedupedSuggestions:(id)arg1 dedupeQueries:(id)arg2 maxCount:(long long)arg3;
- (id)_newSuggestionSection;
- (id)_suggestionResultFromSuggestion:(id)arg1 forQuery:(id)arg2;
- (id)sectionsForCompletions;
- (unsigned int)_lexiconTokenIDForToken:(id)arg1 lexicon:(struct _LXLexicon *)arg2;
- (id)_whiteListedTopResultFromSection:(id)arg1;
- (id)appSuggestions:(id)arg1 maxCount:(long long)arg2;

@end
