/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

#import <CoreSuggestionsUI/SGEventSuggestionBase.h>

#import <CoreSuggestionsUI/Swift-Protocol.h>

@class NSString, UIImage;

@interface SGEventSuggestion : SGEventSuggestionBase <Swift>

{
    UIImage *_calendarImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)calendarImage;

- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (id)suggestionAttributedSubtitle;
- (id)suggestionPrimaryAction;
- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(_Bool)arg2;
- (id)suggestionImage;

@end
