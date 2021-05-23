/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class CNAutocompleteFetchContext, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipient, CNComposeRecipientTextView, EKEvent, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, UIKeyboard, UIScrollView, UITableView;

@protocol EKEventAttendeePickerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttendeePicker : UIViewController

{
    NSArray *_recipients;
    CNComposeRecipientTextView *_composeRecipientView;
    UIScrollView *_recipientScrollView;
    UITableView *_searchResultsView;
    _Bool _showingSearchField;
    UIKeyboard *_keyboard;
    NSNumber *_lastSearchId;
    _Bool _ABAccessDenied;
    _Bool _shouldReenableAutomaticKeyboard;
    struct CGRect _initialFrame;
    NSOperationQueue *_availabilityQueue;
    NSMutableDictionary *_recipientAddressesToRecipients;
    EKEvent *_event;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    _Bool _suppressAvailabilityRequests;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    CNAutocompleteSearchManager *_searchManager;
    NSMutableArray *_searchResults;
    CNAutocompleteResultsTableViewController *_autocompleteTableViewController;
    CNAutocompleteFetchContext *_fetchContext;
    CNComposeRecipient *_displayedRecipient;
    _Bool _hasChanges;
    NSString *_searchAccountID;
    id <EKEventAttendeePickerDelegate> _addressValidationDelegate;
}

@property (copy, nonatomic) NSString *searchAccountID;
@property (nonatomic, readonly) NSArray *addresses;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) NSString *remainingText;
@property (weak, nonatomic) id <EKEventAttendeePickerDelegate> addressValidationDelegate;
@property (nonatomic) _Bool hasChanges;
@property (nonatomic, readonly) _Bool showAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_addressForRecipient:(id)arg1;
+ (_Bool)_participantHasResponded:(id)arg1;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewControllerDidExecuteClearRecentsDataAction:(id)arg1;
- (id)peoplePickerPrompt;
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2 calendar:(id)arg3 overriddenEventStartDate:(id)arg4 overriddenEventEndDate:(id)arg5;
- (void)commitRemainingText;
- (void)_setRecipientsOnComposeView;
- (_Bool)_zeroKeyworkSearchEnabled;
- (void)searchForCorecipients;
- (void)scrollComposeViewToEnd;
- (void)_requestAvailabilityForRecipients:(id)arg1;
- (void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2;
- (id)_lookUpRecipientForAddress:(id)arg1;
- (id)_searchManager;
- (void)_adjustLayoutOfSubviews;
- (id)_searchResultsView;
- (void)_showSearchResultsView;
- (void)_refreshSearchResults;
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(_Bool)arg1;
- (void)_updateFetchContextChosenAddresses;
- (double)_maxScrollerHeight;
- (void)searchWithText:(id)arg1;
- (Class)_CNContactPickerViewController;
- (Class)_CNContactViewController;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)_copyRecipientsFromComposeView;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;

@end
