/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSExtension, NSString, UIBarButtonItem, UINavigationController;

@protocol CNContactPickerContentDelegate, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactPickerHostViewController : _UIRemoteViewController <Swift>

{
    id <CNContactPickerContentDelegate> _delegate;
    id <NSCopying> _currentRequestIdentifier;
    NSExtension *_extension;
}

@property (retain, nonatomic) id <NSCopying> currentRequestIdentifier;
@property (retain, nonatomic) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNContactPickerContentDelegate> delegate;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;

+ (id)contextForIdentifier:(id)arg1;
+ (_Bool)getViewController:(CDUnknownBlockType)arg1;
+ (id)contactPickerExtension;

- (void)invalidate;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidCancel;
- (void)invalidateSelectionAnimated:(_Bool)arg1;

@end
