/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol SGSuggestionDelegate;

@protocol SGSuggestion <Swift>

@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;

- (MISSING_TYPE *)suggestionPrimaryAction;
- (MISSING_TYPE *)suggestionCategory;
- (MISSING_TYPE *)suggestionTitle;

@end
