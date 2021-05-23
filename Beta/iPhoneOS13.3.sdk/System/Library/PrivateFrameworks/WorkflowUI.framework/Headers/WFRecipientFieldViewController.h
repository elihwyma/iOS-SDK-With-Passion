/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class CNAutocompleteFetchContext, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipientTextView, CNContactStore, NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSSet, NSString, WFContactPickerCoordinator;

@protocol WFRecipientFieldViewControllerDelegate;

@interface WFRecipientFieldViewController : UIViewController

{
    CNAutocompleteSearchManager *_searchManager;
    NSSet *_supportedPersonProperties;
    NSString *_fieldLabel;
    id <WFRecipientFieldViewControllerDelegate> _delegate;
    WFContactPickerCoordinator *_contactPickerCoordinator;
    CNAutocompleteResultsTableViewController *_autocompleteResultsController;
    NSLayoutConstraint *_composeHeaderHeightConstraint;
    CNComposeRecipientTextView *_composeTextView;
    CNAutocompleteFetchContext *_fetchContext;
    CNContactStore *_contactStore;
    NSMutableArray *_searchResults;
    NSNumber *_lastSearchID;
}

@property (retain, nonatomic) WFContactPickerCoordinator *contactPickerCoordinator;
@property (nonatomic, readonly) CNAutocompleteResultsTableViewController *autocompleteResultsController;
@property (retain, nonatomic) NSLayoutConstraint *composeHeaderHeightConstraint;
@property (retain, nonatomic) CNComposeRecipientTextView *composeTextView;
@property (nonatomic, readonly) CNAutocompleteFetchContext *fetchContext;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNAutocompleteSearchManager *searchManager;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (copy, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSNumber *lastSearchID;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSArray *entries;
@property (weak, nonatomic) id <WFRecipientFieldViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)commitRemainingText;
- (void)_updateFetchContextChosenAddresses;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (void)_presentContactViewControllerForRecipient:(id)arg1;
- (void)_addSearchResults:(id)arg1 forTask:(id)arg2;
- (void)_startSearch:(id)arg1;
- (void)_finishedSearching;
- (_Bool)hasActiveSearch;
- (void)_cancelActiveSearchClearingText:(_Bool)arg1;
- (void)_resetSearchResults;

@end
