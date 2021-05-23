/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

__attribute__((visibility("hidden")))
@interface CNContactToggleBlockCallerAction : CNContactAction

@property (nonatomic, readonly) _Bool isBlocked;

- (void)block;
- (void)unblock;
- (void)performActionWithSender:(id)arg1;
- (id)allNumbersAndEmails;

@end
