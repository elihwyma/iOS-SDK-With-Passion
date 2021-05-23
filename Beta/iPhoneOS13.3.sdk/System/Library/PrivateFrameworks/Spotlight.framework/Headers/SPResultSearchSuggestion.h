/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <SearchFoundation/SFSearchSuggestion.h>

@class SFSearchResult;

@interface SPResultSearchSuggestion : SFSearchSuggestion

{
    SFSearchResult *_originalResult;
}

@property (retain, nonatomic) SFSearchResult *originalResult;

- (id)description;
- (Class)classForKeyedArchiver;
- (id)initWithResult:(id)arg1;

@end
