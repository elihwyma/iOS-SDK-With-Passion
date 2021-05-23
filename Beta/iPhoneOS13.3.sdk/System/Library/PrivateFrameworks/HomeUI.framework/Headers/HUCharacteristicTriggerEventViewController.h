/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFCharacteristicTriggerBuilder, HUCharacteristicEventOptionItem, HUCharacteristicTriggerEventItemManager, HUTriggerConditionEditorItemModuleController, NSString;

@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController

{
    HFCharacteristicTriggerBuilder *_characteristicTriggerBuilder;
    unsigned long long _mode;
    id <HUTriggerEditorDelegate> _delegate;
    HUTriggerConditionEditorItemModuleController *_conditionModuleController;
    HUCharacteristicEventOptionItem *_selectedEventOptionItem;
}

@property (retain, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, readonly) HUCharacteristicTriggerEventItemManager *itemManager;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (id)itemModuleControllers;
- (_Bool)_canCommitTriggerBuilder;
- (id)_commitTriggerBuilder;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)_showSummary:(id)arg1;
- (void)_showActionEditor:(id)arg1;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)_validateNextButton;
- (_Bool)_canContinue;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (_Bool)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;

@end
