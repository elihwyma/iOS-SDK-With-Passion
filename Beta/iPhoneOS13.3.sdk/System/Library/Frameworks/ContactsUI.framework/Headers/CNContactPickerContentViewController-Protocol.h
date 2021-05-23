/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class UIBarButtonItem, UINavigationController;

@protocol CNContactPickerContentDelegate;

@protocol CNContactPickerContentViewController <Swift>

@property (weak, nonatomic) id <CNContactPickerContentDelegate> delegate;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;

- (unsigned short)invalidate;
- (unsigned short)invalidateSelectionAnimated: /* Error: Ran out of types for this method. */;

@end
