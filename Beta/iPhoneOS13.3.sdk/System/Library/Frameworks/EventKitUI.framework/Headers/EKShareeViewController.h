/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

@class EKSharee, UIAlertController;

@protocol EKShareeViewControllerDelegate;

@interface EKShareeViewController : UITableViewController

{
    UIAlertController *_removeAlertController;
    _Bool _allowEditing;
    _Bool _allowStopSharing;
    _Bool _allowResendInvitations;
    EKSharee *_sharee;
    id <EKShareeViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) EKSharee *sharee;
@property (nonatomic) _Bool allowEditing;
@property (nonatomic) _Bool allowStopSharing;
@property (nonatomic) _Bool allowResendInvitations;
@property (weak, nonatomic) id <EKShareeViewControllerDelegate> delegate;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)_rowForSubitem:(int)arg1;
- (id)initWithSharee:(id)arg1;
- (_Bool)_shouldDisplayResendInvitationButton;
- (void)_reloadTitle;
- (_Bool)_shouldDisplayStopSharingButton;
- (int)_subitemAtRow:(long long)arg1;
- (void)_allowEditingChanged:(id)arg1;
- (void)removeClicked:(id)arg1;

@end
