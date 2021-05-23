/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

__attribute__((visibility("hidden")))
@interface CNContactSuggestionAction : CNContactAction

- (void)performActionWithSender:(id)arg1;
- (_Bool)_confirmOrReject:(_Bool)arg1;
- (_Bool)ignoreSuggestion;
- (_Bool)confirmSuggestion;

@end
