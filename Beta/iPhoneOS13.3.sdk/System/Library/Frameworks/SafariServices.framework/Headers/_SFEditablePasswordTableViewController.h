/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFPasswordTableViewController.h>

@class NSArray, NSMutableArray, NSString, UIBarButtonItem, WBSAutoFillQuirksManager;

@interface _SFEditablePasswordTableViewController : _SFPasswordTableViewController

{
    NSMutableArray *_savedPasswordsBySection;
    NSArray *_savedPasswordsMatchingSearchPattern;
    UIBarButtonItem *_addBarButtonItem;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchPatternDidUpdate;
- (void)_reloadPasswords;
- (void)_addBarButtonItemTapped:(id)arg1;
- (void)_editBarButtonItemTapped:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (id)_deletePasswordActionTitle;
- (void)_deleteBarButtonItemTapped:(id)arg1;
- (void)_deletePasswordsAtIndexPaths:(id)arg1;
- (void)_updateDeleteButton;
- (_Bool)_shouldShowSectionHeaders;
- (id)_passwordForIndexPath:(id)arg1;
- (void)_updateMatchingPasswords;
- (void)addPasswordViewControllerDidFinish:(id)arg1 withSavedPassword:(id)arg2;
- (id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2;

@end
