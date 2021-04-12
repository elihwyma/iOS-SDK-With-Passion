//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FamilyCircleUI/AAUIContactsSearchDelegate-Protocol.h>

@class ACAccount, ACAccountStore, CNContactStore, CNMonogrammer, FAContactsSearchController, NSArray, NSString, UIBarButtonItem, UIButton, UILabel, UITableView, UITextField, UIView;
@protocol FAPickInviteeDelegate;

@interface FAFamilyPickInviteeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AAUIContactsSearchDelegate>
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

@property(copy, nonatomic) NSString *createChildAccountInstructions; // @synthesize createChildAccountInstructions=_createChildAccountInstructions;
@property(copy, nonatomic) NSString *createChildAccountButtonTitle; // @synthesize createChildAccountButtonTitle=_createChildAccountButtonTitle;
@property(copy, nonatomic) NSString *addFamilyMemberInstructions; // @synthesize addFamilyMemberInstructions=_addFamilyMemberInstructions;
@property(readonly, nonatomic) NSString *inviteeCompositeName; // @synthesize inviteeCompositeName=_inviteeCompositeName;
@property(readonly, nonatomic) NSString *inviteeShortName; // @synthesize inviteeShortName=_inviteeShortName;
@property(readonly, nonatomic) NSString *inviteeEmail; // @synthesize inviteeEmail=_inviteeEmail;
@property(readonly, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) __weak id <FAPickInviteeDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_imageForPersonWithRecordID:(unsigned int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(BOOL)arg2;
- (void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2;
- (void)_hideSearchResults;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_updateNextButtonEnabledState;
- (void)_nextButtonWasTapped:(id)arg1;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)viewDidLoad;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)viewWillLayoutSubviews;
- (id)contentScrollView;
- (void)loadView;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

@end

