/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UITableViewController.h>

@class CNRecentComposeRecipientGroup;

@protocol CNAutocompleteGroupDetailViewControllerDelegate;

@interface CNAutocompleteGroupDetailViewController : UITableViewController

{
    id <CNAutocompleteGroupDetailViewControllerDelegate> _delegate;
    CNRecentComposeRecipientGroup *_group;
}

@property (weak, nonatomic) id <CNAutocompleteGroupDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) CNRecentComposeRecipientGroup *group;

- (id)initWithStyle:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_removeButtonTapped:(id)arg1;

@end
