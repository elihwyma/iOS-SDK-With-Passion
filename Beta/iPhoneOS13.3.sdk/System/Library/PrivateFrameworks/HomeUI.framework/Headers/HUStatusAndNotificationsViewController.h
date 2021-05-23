/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFItem, HUCameraSmartNotificationSettingsModuleController, HUStatusAndNotificationsItemManager, HUTriggerConditionEditorItemModuleController, NSString;

@protocol HFServiceLikeItem;

@interface HUStatusAndNotificationsViewController : HUItemTableViewController

{
    HFItem<HFServiceLikeItem> *_item;
    HUTriggerConditionEditorItemModuleController *_conditionModuleController;
    HUCameraSmartNotificationSettingsModuleController *_cameraSmartSettingsModuleController;
}

@property (nonatomic, readonly) HUStatusAndNotificationsItemManager *itemManager;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (nonatomic, readonly) HUCameraSmartNotificationSettingsModuleController *cameraSmartSettingsModuleController;
@property (nonatomic) _Bool showStatusSection;
@property (nonatomic) _Bool useServiceNameAsTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)itemModuleControllers;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2;
- (void)smartNotificationSettingsModuleController:(id)arg1 didUpdateConditionCollection:(id)arg2;
- (id)initWithServiceItem:(id)arg1 home:(id)arg2;

@end
