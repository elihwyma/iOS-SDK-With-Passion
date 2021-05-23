/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <UIKit/UIViewController.h>

@class CTXPCServiceSubscriptionContext, NSArray, NSLayoutConstraint, NSString, UILabel, UIScrollView, UITableView, UITextField;

@interface NPHBSCellularFauxCardInfoViewController : UIViewController

{
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    struct CGSize _keyboardSize;
    CDUnknownBlockType _completion;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    UILabel *_enterActivationLabel;
    UITableView *_infoTableView;
    NSLayoutConstraint *_infoTableViewHeightConstraint;
    UIScrollView *_scrollView;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) UILabel *enterActivationLabel;
@property (weak, nonatomic) UITableView *infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)scrollViewForKeyboardIfNecessary;
- (void)activatePlan:(id)arg1;

@end
