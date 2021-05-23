/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewController.h>

@class CNAccountsAndGroupsDataSource, CNContactListStyleApplier, NSString;

@protocol CNAccountsAndGroupsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsViewController : UITableViewController

{
    _Bool _needsReload;
    _Bool _tableViewNeedsReloadAfterResume;
    CNContactListStyleApplier *_contactListStyleApplier;
    CNAccountsAndGroupsDataSource *_dataSource;
    id <CNAccountsAndGroupsViewControllerDelegate> _delegate;
}

@property (nonatomic) _Bool needsReload;
@property (nonatomic) _Bool tableViewNeedsReloadAfterResume;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource;
@property (weak, nonatomic) id <CNAccountsAndGroupsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationDidResume;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)applyStyle;
- (void)contactStoreDidChangeWithNotification:(id)arg1;

@end
