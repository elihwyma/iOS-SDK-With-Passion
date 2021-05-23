/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/SGReminderSuggestionBase.h>

@class CLLocation, NSAttributedString, NSDateComponents, NSString, NSURL, NSUserActivity;

@interface SGReminderSuggestion : SGReminderSuggestionBase

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSAttributedString *notes;
@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *locationString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) _Bool wantsExtendedDetailOnlyView;
@property (nonatomic, readonly) _Bool titleIsGeneratedSuggestion;
@property (nonatomic, readonly) long long locationProximity;

+ (id)remindersImage;

- (id)suggestionPrimaryAction;
- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(_Bool)arg2;
- (id)suggestionImage;
- (id)suggestionCategoryImage;
- (void)reminderCreationViewController:(id)arg1 didCreateReminder:(_Bool)arg2 error:(id)arg3;

@end
