/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactPickerContentViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceViewController : CNContactPickerContentViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidCancel;
- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;
- (id)_filteredProperty:(id)arg1;

@end
