/*
 Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <UITableViewController.h>

@class UIBarButtonItem, UITableViewCell;

@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;

@interface CertInfoTrustSummaryController : UITableViewController

{
    id <CertInfoTrustDescription> _description;
    id <CertInfoTrustSummaryControllerDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    UITableViewCell *_descriptionCell;
    unsigned int _showsDoneButton:1;
}

@property (weak, nonatomic) id <CertInfoTrustSummaryControllerDelegate> delegate;
@property (nonatomic) _Bool showsDoneButton;

- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (id)_headerCell;
- (id)_descriptionCell;
- (void)setActionButtonTitle:(id)arg1 destructive:(_Bool)arg2 animated:(_Bool)arg3;
- (id)initWithTrustDescription:(id)arg1;

@end
