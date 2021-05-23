/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HFContactController, HMHome, IDSBatchIDQueryController, MFComposeRecipientTextView, MFContactsSearchManager, NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, NSTimer, UIActivityIndicatorView, UIColor, UITableView, UIView;

@protocol HUAddPeopleViewControllerDelegate;

@interface HUAddPeopleViewController : UIViewController

{
    _Bool _addressBookAccessDenied;
    _Bool _showingAutoCompleteResults;
    id <HUAddPeopleViewControllerDelegate> _delegate;
    HMHome *_home;
    unsigned long long _state;
    MFComposeRecipientTextView *_composeView;
    UIView *_separatorView;
    UITableView *_tableView;
    NSLayoutConstraint *_composeViewBottomConstraint;
    NSArray *_constraints;
    UIActivityIndicatorView *_spinner;
    UIColor *_effectiveTintColor;
    HFContactController *_contactsController;
    MFContactsSearchManager *_searchManager;
    NSNumber *_lastSearchID;
    NSArray *_autoCompleteResults;
    NSMutableArray *_additionalAutoCompleteResults;
    NSArray *_familyMembers;
    NSString *_unatomizedAddress;
    NSTimer *_statusQueryDebounceTimer;
    IDSBatchIDQueryController *_statusQueryController;
}

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) MFComposeRecipientTextView *composeView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSLayoutConstraint *composeViewBottomConstraint;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIColor *effectiveTintColor;
@property (nonatomic) _Bool addressBookAccessDenied;
@property (retain, nonatomic) HFContactController *contactsController;
@property (retain, nonatomic) MFContactsSearchManager *searchManager;
@property (retain, nonatomic) NSNumber *lastSearchID;
@property (nonatomic) _Bool showingAutoCompleteResults;
@property (retain, nonatomic) NSArray *autoCompleteResults;
@property (retain, nonatomic) NSMutableArray *additionalAutoCompleteResults;
@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) NSString *unatomizedAddress;
@property (retain, nonatomic) NSTimer *statusQueryDebounceTimer;
@property (retain, nonatomic) IDSBatchIDQueryController *statusQueryController;
@property (weak, nonatomic) id <HUAddPeopleViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateViewConstraints;
- (void)cancelButtonPressed:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (id)initWithHome:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)contactController:(id)arg1 didFinishDownloadingFamilyMemberAvatar:(id)arg2;
- (id)requiredKeyDescriptors;
- (void)sendButtonPressed:(id)arg1;
- (void)updateStateDependentUI;
- (void)scheduleDelayedLookupVisibleRecipients;
- (void)sendInvites;
- (id)tintColorForRecipient:(id)arg1;
- (id)IDSDestinationForRecipient:(id)arg1;
- (void)lookupVisibleRecipients;
- (id)composeRecipientForAddress:(id)arg1;
- (void)lookupIDSDestinations:(id)arg1;
- (id)recipientsWithStatusPassingTest:(CDUnknownBlockType)arg1;

@end
