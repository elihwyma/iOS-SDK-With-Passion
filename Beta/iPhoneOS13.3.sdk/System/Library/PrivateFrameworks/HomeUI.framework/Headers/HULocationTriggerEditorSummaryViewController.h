/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFLocationTriggerBuilder, HULocationTriggerEditorSummaryItemManager, HUPresenceUserPickerItemModuleController, HUTriggerConditionEditorItemModuleController, NSString;

@protocol HUTriggerEditorDelegate;

@interface HULocationTriggerEditorSummaryViewController : HUItemTableViewController

{
    HFLocationTriggerBuilder *_triggerBuilder;
    unsigned long long _mode;
    id <HUTriggerEditorDelegate> _delegate;
    HUPresenceUserPickerItemModuleController *_userPickerModuleController;
    HUTriggerConditionEditorItemModuleController *_conditionEditorModuleController;
}

@property (nonatomic, readonly) HULocationTriggerEditorSummaryItemManager *itemManager;
@property (nonatomic, readonly) HUPresenceUserPickerItemModuleController *userPickerModuleController;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController;
@property (nonatomic, readonly) HFLocationTriggerBuilder *triggerBuilder;
@property (nonatomic, readonly) unsigned long long mode;
@property (weak, nonatomic, readonly) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultLocationEventBuilderForHome:(id)arg1 eventType:(unsigned long long)arg2;

- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)regionEditorDidCancel:(id)arg1;
- (void)regionEditor:(id)arg1 didFinishWithRegion:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)itemModuleControllers;
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)_showSummary:(id)arg1;
- (void)_showActionEditor:(id)arg1;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)presenceUserPickerItemModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)arg1;

@end
