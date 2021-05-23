/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <UIKit/UIViewController.h>

@class NPHSetupTableViewCell, NSLayoutConstraint, NSString, UILabel, UITableView;

@protocol NPHBSCellularConfirmationCodeViewControllerDelegate;

@interface NPHBSCellularConfirmationCodeViewController : UIViewController

{
    NPHSetupTableViewCell *_confirmationCodeCell;
    id <NPHBSCellularConfirmationCodeViewControllerDelegate> _delegate;
    UILabel *_confirmationCodeTitleLabel;
    UITableView *_infoTableView;
    NSLayoutConstraint *_infoTableViewHeightConstraint;
}

@property (weak, nonatomic) id <NPHBSCellularConfirmationCodeViewControllerDelegate> delegate;
@property (weak, nonatomic) UILabel *confirmationCodeTitleLabel;
@property (weak, nonatomic) UITableView *infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)confirm:(id)arg1;

@end
