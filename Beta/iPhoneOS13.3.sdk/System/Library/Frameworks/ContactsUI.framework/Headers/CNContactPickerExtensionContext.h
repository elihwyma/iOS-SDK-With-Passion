/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionContext : NSExtensionContext <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidCancel;
- (void)invalidateSelectionAnimated:(_Bool)arg1;

@end
