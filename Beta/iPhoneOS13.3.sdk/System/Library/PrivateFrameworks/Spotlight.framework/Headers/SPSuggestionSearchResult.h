/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <Search/SFSearchResult_SpotlightExtras.h>

@class SFSearchSuggestion;

@interface SPSuggestionSearchResult : SFSearchResult_SpotlightExtras

{
    SFSearchSuggestion *_suggestion;
}

@property (nonatomic, readonly) SFSearchSuggestion *suggestion;

+ (id)_richDisplayTextForSuggestion:(id)arg1 forQuery:(id)arg2;

- (id)initWithSearchSuggestion:(id)arg1 forQuery:(id)arg2;

@end
