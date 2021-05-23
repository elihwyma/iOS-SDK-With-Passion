/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactUpdateExistingContactAction : CNContactAction <Swift>

{
    CNContact *_existingContact;
}

@property (retain, nonatomic) CNContact *existingContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;

@end
