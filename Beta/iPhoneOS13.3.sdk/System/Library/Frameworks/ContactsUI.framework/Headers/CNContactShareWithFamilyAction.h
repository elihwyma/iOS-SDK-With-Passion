/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

__attribute__((visibility("hidden")))
@interface CNContactShareWithFamilyAction : CNContactAction

- (id)title;
- (_Bool)isDestructive;
- (_Bool)canPerformAction;
- (void)performActionWithSender:(id)arg1;
- (_Bool)familySharedContainerExists;

@end
