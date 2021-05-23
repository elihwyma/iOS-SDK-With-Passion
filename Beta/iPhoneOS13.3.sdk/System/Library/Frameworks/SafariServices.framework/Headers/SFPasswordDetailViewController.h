/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class SFEditableTableViewCell, SFSafariViewController, UIBarButtonItem, WBSSavedPassword;

@protocol SFPasswordDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFPasswordDetailViewController : UITableViewController

{
    WBSSavedPassword *_savedPassword;
    _Bool _hidesPassword;
    unsigned long long _type;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    SFSafariViewController *_changePasswordSafariViewController;
    id <SFPasswordDetailViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SFPasswordDetailViewControllerDelegate> delegate;

- (void)dealloc;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)_appWillResignActive:(id)arg1;
- (_Bool)_allowEditing;
- (void)_textFieldChanged:(id)arg1;
- (void)_editBarButtonItemTapped:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (id)initWithSavedPassword:(id)arg1 type:(unsigned long long)arg2;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_passwordStoreDidUpdate;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_willHideUIMenuController:(id)arg1;
- (void)_configureCell:(id)arg1 withText:(id)arg2 detailText:(id)arg3 detailPlaceholderText:(id)arg4;
- (void)_setHighLyLegibleFontForDetailTextInCell:(id)arg1;
- (id)_editableCellWithCell:(id)arg1;
- (void)_configureUserCell:(id)arg1;
- (void)_configurePasswordCell:(id)arg1;
- (void)_showChangePasswordSafariViewController;
- (void)safari_copyUserName:(id)arg1;
- (void)safari_copyPassword:(id)arg1;

@end
