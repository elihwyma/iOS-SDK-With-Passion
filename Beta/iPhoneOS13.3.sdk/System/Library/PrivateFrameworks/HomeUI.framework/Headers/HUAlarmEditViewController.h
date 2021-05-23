/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HUAlarmEditView, MTAlarm, MTMutableAlarm, NSSet, NSString;

@protocol HUAlarmEditViewControllerDelegate;

@interface HUAlarmEditViewController : UIViewController

{
    id <HUAlarmEditViewControllerDelegate> _delegate;
    NSString *_loggedInAppleMusicAccountDSID;
    NSSet *_selectedActionSets;
    HUAlarmEditView *_editAlarmView;
    long long _editingAlarmSetting;
    MTAlarm *_originalAlarm;
    MTMutableAlarm *_editedAlarm;
}

@property (retain, nonatomic) HUAlarmEditView *editAlarmView;
@property (nonatomic) long long editingAlarmSetting;
@property (retain, nonatomic) MTAlarm *originalAlarm;
@property (retain, nonatomic) MTMutableAlarm *editedAlarm;
@property (nonatomic, readonly, getter=isEdited) _Bool edited;
@property (weak, nonatomic) id <HUAlarmEditViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *loggedInAppleMusicAccountDSID;
@property (nonatomic, readonly) NSSet *selectedActionSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)desiredContentSize;

- (void)dealloc;
- (void)loadView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidUnload;
- (id)initWithAlarm:(id)arg1;
- (void)_cancelButtonClicked:(id)arg1;
- (void)_doneButtonClicked:(id)arg1;
- (void)handleSuspend;
- (void)handlePickerChanged;
- (void)saveAlarmOnlyIfEdited:(_Bool)arg1;
- (_Bool)isNewAlarm;
- (void)startEditingSetting:(long long)arg1;
- (void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2;

@end
