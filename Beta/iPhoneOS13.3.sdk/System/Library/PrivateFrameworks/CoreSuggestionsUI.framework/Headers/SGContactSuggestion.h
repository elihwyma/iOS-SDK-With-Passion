/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/SGContactSuggestionBase.h>

@class NSString;

@protocol SGContactSuggestionDelegate;

@interface SGContactSuggestion : SGContactSuggestionBase

{
    id <SGContactSuggestionDelegate> _delegate;
}

@property (weak, nonatomic) id <SGContactSuggestionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contactImage;

- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)suggestionPrimaryAction;
- (id)suggestionImage;

@end
