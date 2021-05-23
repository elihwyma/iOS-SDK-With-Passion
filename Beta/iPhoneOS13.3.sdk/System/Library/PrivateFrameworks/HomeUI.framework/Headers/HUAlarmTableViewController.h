/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUHomePodAlarmItemModuleController, MTAlarm, NSString, UIBarButtonItem, _UIContentUnavailableView;

@protocol HFMediaProfileContainer, HUPresentationDelegate;

@interface HUAlarmTableViewController : HUItemTableViewController <Swift>

{
    _Bool _isAccessoryControllable;
    _Bool _isAlarmsSettingReady;
    id <HUPresentationDelegate> _presentationDelegate;
    UIBarButtonItem *_doneButtonItem;
    HUHomePodAlarmItemModuleController *_alarmModuleController;
    MTAlarm *_alarmToEdit;
    _UIContentUnavailableView *_noItemsView;
    UIBarButtonItem *_addButtonItem;
    UIBarButtonItem *_editDoneButtonItem;
    id <HFMediaProfileContainer> _mediaProfileContainer;
}

@property (retain, nonatomic) HUHomePodAlarmItemModuleController *alarmModuleController;
@property (retain, nonatomic) MTAlarm *alarmToEdit;
@property (retain, nonatomic) _UIContentUnavailableView *noItemsView;
@property (retain, nonatomic) UIBarButtonItem *addButtonItem;
@property (retain, nonatomic) UIBarButtonItem *editDoneButtonItem;
@property (nonatomic, readonly) _Bool isAccessoryControllable;
@property (nonatomic, readonly) _Bool isAlarmsSettingReady;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

- (id)backgroundView;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)arg1;
- (void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)itemModuleControllers;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)_showAddView:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)_discernReachabilityForAccessory:(id)arg1;
- (void)_updateNavigationItems:(_Bool)arg1;
- (void)_numberOfItemsDidChangeAnimated:(_Bool)arg1;
- (void)_layoutNoItemsLabel;
- (id)editViewControllerForAlarm:(id)arg1;
- (id)alarmItemManager;
- (void)_updateAccessoryControllable:(_Bool)arg1 alarmsSettingReady:(_Bool)arg2;
- (_Bool)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;

@end
