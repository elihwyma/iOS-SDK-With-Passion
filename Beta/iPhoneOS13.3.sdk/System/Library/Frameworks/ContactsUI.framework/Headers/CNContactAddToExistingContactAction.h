/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNContactPickerViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddToExistingContactAction : CNContactAction <Swift>

{
    CNContact *_chosenContact;
    CNContactPickerViewController *_contactPicker;
}

@property (retain, nonatomic) CNContactPickerViewController *contactPicker;
@property (retain, nonatomic) CNContact *chosenContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;

@end
