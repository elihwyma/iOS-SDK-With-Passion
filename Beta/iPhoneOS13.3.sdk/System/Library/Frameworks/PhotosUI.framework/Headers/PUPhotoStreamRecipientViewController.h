/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class CNContactPickerViewController, CNContactStore, IDSBatchIDQueryController, MFComposeRecipientTextView, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSMutableSet, NSNumber, NSString, UIScrollView, UITableView;

@interface PUPhotoStreamRecipientViewController : UIViewController

{
    UITableView *_searchResultsTable;
    MFComposeRecipientTextView *_recipientView;
    UIScrollView *_recipientContainerView;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    NSNumber *_currentSearchTaskID;
    NSArray *_searchResults;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    NSMutableSet *_validPhoneNumbers;
    _Bool _wasFirstResponder;
    _Bool _showingContactPicker;
    CNContactPickerViewController *_contactPickerPresentedController;
    struct CGSize _recipientViewSize;
    double _lastHeight;
    CNContactStore *_contactStore;
    id _delegate;
    double _bottomTableOffset;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic) double bottomTableOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)_searchManager;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;
- (void)_dismissContactPicker;
- (void)_setSearchResults:(id)arg1;
- (void)makeRecipientViewResignFirstResponder;
- (void)makeRecipientViewFirstResponder;
- (void)_searchForRecipientWithText:(id)arg1;
- (id)_selectedNormalizedPhoneForRecipient:(id)arg1;
- (void)_addRecipientForContact:(id)arg1 address:(id)arg2 kind:(unsigned long long)arg3;

@end
