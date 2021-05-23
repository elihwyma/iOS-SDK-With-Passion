/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UITableView, UIView;

@interface SBActivationInfoViewController : UIViewController

{
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileEquipmentInfo;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
    UIButton *_regulatoryInfoButton;
}

@property (nonatomic, readonly) UIButton *regulatoryInfoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_titleForHeaderInSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)_updateMobileEquipmentInfo;
- (void)_telephonyStateChanged;
- (id)_activationInfoCell;
- (id)_backgroundViewForHeaderView:(id)arg1;
- (id)_processMobileEquipmentInfo:(id)arg1;
- (id)_processMobileSubscriptionInfo;
- (id)_processDeviceInfo;
- (id)_formattedIMEI:(id)arg1;
- (id)_formattedCSN:(id)arg1;
- (id)_formattedICCID:(id)arg1;
- (id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2;

@end
