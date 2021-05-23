/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNContactPickerViewController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddLinkedCardAction : CNContactAction <Swift>

{
    CNContact *_chosenContact;
    NSArray *_editingLinkedContacts;
    CNContactPickerViewController *_contactPicker;
    CNContact *_selectedContact;
}

@property (retain, nonatomic) CNContactPickerViewController *contactPicker;
@property (retain, nonatomic) CNContact *selectedContact;
@property (retain, nonatomic) CNContact *chosenContact;
@property (retain, nonatomic) NSArray *editingLinkedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)peoplePickerLinkButtonTapped;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;

@end
