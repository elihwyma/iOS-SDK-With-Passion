/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <UIKit/UIViewController.h>

@class ACAccount, ACAccountStore, CNContactStore, CNMonogrammer, FAContactsSearchController, NSArray, NSString, UIBarButtonItem, UIButton, UILabel, UITableView, UITextField, UIView;

@protocol FAPickInviteeDelegate;

@interface FAFamilyPickInviteeViewController : UIViewController

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    FAContactsSearchController *_contactsSearchController;
    NSArray *_searchResults;
    UIView *_separator;
    UITableView *_resultsTableView;
    UIView *_container;
    UIView *_contactSearchBarContainer;
    UITextField *_contactSearchBar;
    UILabel *_toLabel;
    UILabel *_instructionsLabel;
    UILabel *_childAccountLabel;
    UIButton *_createChildAccountButton;
    CNMonogrammer *_monogrammer;
    UIBarButtonItem *_nextButton;
    CNContactStore *_contactStore;
    id <FAPickInviteeDelegate> _delegate;
    NSString *_searchQuery;
    NSString *_inviteeEmail;
    NSString *_inviteeShortName;
    NSString *_inviteeCompositeName;
    NSString *_addFamilyMemberInstructions;
    NSString *_createChildAccountButtonTitle;
    NSString *_createChildAccountInstructions;
}

@property (weak, nonatomic) id <FAPickInviteeDelegate> delegate;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) NSString *inviteeEmail;
@property (nonatomic, readonly) NSString *inviteeShortName;
@property (nonatomic, readonly) NSString *inviteeCompositeName;
@property (copy, nonatomic) NSString *addFamilyMemberInstructions;
@property (copy, nonatomic) NSString *createChildAccountButtonTitle;
@property (copy, nonatomic) NSString *createChildAccountInstructions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)contentScrollView;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(_Bool)arg2;
- (void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)textFieldValueDidChange:(id)arg1;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (void)_nextButtonWasTapped:(id)arg1;
- (void)_updateNextButtonEnabledState;
- (void)_hideSearchResults;
- (id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2;
- (id)_imageForPersonWithRecordID:(unsigned int)arg1;

@end
