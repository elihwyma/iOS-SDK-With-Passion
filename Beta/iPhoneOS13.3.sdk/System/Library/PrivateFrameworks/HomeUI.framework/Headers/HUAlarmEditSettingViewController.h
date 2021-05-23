/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HUAlarmEditableTextCell, MTMutableAlarm, NSString, UITableView;

@protocol HUAlarmEditSettingViewControllerDelegate;

@interface HUAlarmEditSettingViewController : UIViewController

{
    id <HUAlarmEditSettingViewControllerDelegate> _delegate;
    NSString *_loggedInAppleMusicAccountDSID;
    UITableView *_tableView;
    HUAlarmEditableTextCell *_editingCell;
    long long _setting;
    unsigned long long _firstWeekday;
    unsigned long long _repeatSchedule;
    MTMutableAlarm *_alarm;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HUAlarmEditableTextCell *editingCell;
@property (nonatomic) long long setting;
@property (nonatomic) unsigned long long firstWeekday;
@property (nonatomic) unsigned long long repeatSchedule;
@property (copy, nonatomic) MTMutableAlarm *alarm;
@property (weak, nonatomic) id <HUAlarmEditSettingViewControllerDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *loggedInAppleMusicAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_commonInitialization;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_dismiss;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidUnload;
- (void)textValueChanged:(id)arg1;
- (id)initWithAlarm:(id)arg1 setting:(long long)arg2 loggedInAppleMusicAccountDSID:(id)arg3;
- (unsigned int)maskForRow:(long long)arg1;

@end
