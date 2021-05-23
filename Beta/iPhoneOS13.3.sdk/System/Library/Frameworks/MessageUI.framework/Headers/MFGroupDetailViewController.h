/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UITableViewController.h>

@class MFRecentComposeRecipientGroup;

@protocol MFGroupDetailViewControllerDelegate;

@interface MFGroupDetailViewController : UITableViewController

{
    id <MFGroupDetailViewControllerDelegate> _delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property (weak, nonatomic) id <MFGroupDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) MFRecentComposeRecipientGroup *group;

- (id)initWithStyle:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_removeButtonTapped:(id)arg1;

@end
