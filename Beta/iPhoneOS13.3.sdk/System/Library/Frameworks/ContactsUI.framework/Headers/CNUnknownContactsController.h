/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactStore, NSArray, NSString, UIViewController;

@protocol CNUnknownContactsControllerDelegate;

@interface CNUnknownContactsController : NSObject <Swift>

{
    id <CNUnknownContactsControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    NSArray *_contacts;
    UIViewController *_displayedController;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) NSArray *contacts;
@property (retain, nonatomic) UIViewController *displayedController;
@property (weak, nonatomic) id <CNUnknownContactsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)viewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (_Bool)multipleUnknownContactsViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (id)initWithContacts:(id)arg1 contactStore:(id)arg2;

@end
