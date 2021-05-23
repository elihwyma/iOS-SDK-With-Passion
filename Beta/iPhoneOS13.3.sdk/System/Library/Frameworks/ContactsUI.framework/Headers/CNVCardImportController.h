/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactStore, CNQueue, CNUIEditAuthorizationController, NSString, UIViewController;

@protocol CNVCardImportControllerDelegate, CNVCardImportControllerPresentationDelegate;

@interface CNVCardImportController : NSObject <Swift>

{
    id <CNVCardImportControllerPresentationDelegate> _presentationDelegate;
    id <CNVCardImportControllerDelegate> _delegate;
    CNQueue *_receivedContactsQueue;
    CNContactStore *_contactStore;
    UIViewController *_presentedViewController;
    CNUIEditAuthorizationController *_editAuthorizationController;
}

@property (weak, nonatomic) id <CNVCardImportControllerPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) CNQueue *receivedContactsQueue;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController;
@property (weak, nonatomic) id <CNVCardImportControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)showEditAuthorizationPane:(id)arg1 animated:(_Bool)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2;
- (id)contactsFromURL:(id)arg1;
- (void)presentEnqueueResultsUIForResultContacts:(id)arg1;
- (_Bool)enqueueContactsAtURL:(id)arg1;
- (void)enqueueContacts:(id)arg1;
- (id)dequeueContacts;
- (void)processNextContacts;
- (void)presentImportUIForContacts:(id)arg1;
- (void)dismissContactsAndPresentNext;
- (void)saveUnknownPersons:(id)arg1;
- (void)saveUnknownPersons:(id)arg1 isAuthorized:(_Bool)arg2;
- (void)authorizeAndSaveUnknownPersons;
- (void)cancelModalUnknownPersons:(id)arg1;

@end
