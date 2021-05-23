/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <Foundation/NSObject.h>

@class NSString, SGReminder;

@protocol SGSuggestionDelegate;

@interface SGReminderSuggestionBase : NSObject

{
    SGReminder *_reminder;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SGSuggestionDelegate> suggestionDelegate;

- (id)suggestionAttributedSubtitle;
- (id)suggestionPrimaryAction;
- (id)realtimeSuggestion;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionDismissAction;
- (id)suggestionSubtitle;
- (id)suggestionCategory;
- (id)suggestionTitle;
- (id)primaryActionTitle;
- (id)initWithRealtimeReminder:(id)arg1;
- (id)suggestionsSecondTitle;

@end
