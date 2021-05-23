/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface CNContactCreateNewContactAction : CNContactAction <Swift>

{
    CNContact *_createdContact;
    UIViewController *_presentingViewController;
}

@property (retain, nonatomic) CNContact *createdContact;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;

@end
