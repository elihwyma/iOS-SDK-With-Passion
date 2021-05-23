/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKRecipientSelectionController.h>

#import <ChatKit/Swift-Protocol.h>

@class NSString, UIBarButtonItem;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <Swift>

{
    UIBarButtonItem *_doneButton;
}

@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)initWithConversation:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (_Bool)homogenizePreferredServiceForiMessage;
- (void)recipientSelectionControllerDidChange;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (_Bool)shouldSuppressSearchResultsTable;
- (_Bool)alwaysShowSearchResultsTable;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (id)handlesForScreenTimePolicyCheck;
- (void)_updateNavigationButton;
- (void)_frecencySearch;
- (double)topInsetForNavBar;

@end
