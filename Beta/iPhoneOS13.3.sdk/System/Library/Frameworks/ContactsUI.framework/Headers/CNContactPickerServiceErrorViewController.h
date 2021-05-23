/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNErrorViewController.h>

@class NSString, UIBarButtonItem, UINavigationController;

@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceErrorViewController : CNErrorViewController

{
    id <CNContactPickerContentDelegate> delegate;
    UINavigationController *navigationController;
    UIBarButtonItem *addContactBarButtonItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNContactPickerContentDelegate> delegate;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIBarButtonItem *addContactBarButtonItem;

- (void)invalidate;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)invalidateSelectionAnimated:(_Bool)arg1;

@end
