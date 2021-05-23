/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

@class CSSearchQuery, NSArray, NSMutableSet, NSString, UITableView;

@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController

{
    _Bool _showingAccounts;
    _Bool _showingRecipients;
    _Bool _showingAttachments;
    UITableView *_tableView;
    NSArray *_sections;
    NSMutableSet *_allRecipients;
    NSMutableSet *_allSenders;
    NSArray *_allAccounts;
    NSMutableSet *_allAccountsUsernames;
    CSSearchQuery *_query;
}

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) NSArray *sections;
@property (retain, nonatomic) NSMutableSet *allRecipients;
@property (retain, nonatomic) NSMutableSet *allSenders;
@property (retain, nonatomic) NSArray *allAccounts;
@property (retain, nonatomic) NSMutableSet *allAccountsUsernames;
@property (retain, nonatomic) CSSearchQuery *query;
@property (nonatomic) _Bool showingAccounts;
@property (nonatomic) _Bool showingRecipients;
@property (nonatomic) _Bool showingAttachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)startQuery:(id)arg1;
- (void)updateUI;
- (id)supportedAccountTypeIdentifiers;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;
- (id)infoForSection:(long long)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (void)didSelectContacts:(id)arg1 ofType:(unsigned long long)arg2;
- (void)triggerTextConfigurationViewController:(id)arg1 didSelectText:(id)arg2;
- (void)triggerTextConfigurationViewControllerDidCancel:(id)arg1;
- (void)setUpAccounts;
- (_Bool)additionalSectionRowWithinAccounts:(long long)arg1;
- (_Bool)additionalSectionRowWithinRecipient:(long long)arg1;
- (long long)firstRowOfRecipient;
- (long long)firstRowOfHasAttachment;
- (_Bool)additionalSectionRowWithinHasAttachment:(long long)arg1;
- (id)displayForSelectedContacts:(id)arg1;
- (id)accountFromUsername:(id)arg1;

@end
