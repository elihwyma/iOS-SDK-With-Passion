/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class SFEditableTableViewCell, UIBarButtonItem;

@protocol SFAddPasswordViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFAddPasswordViewController : UITableViewController

{
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    id <SFAddPasswordViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SFAddPasswordViewControllerDelegate> delegate;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_textFieldChanged:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;

@end
