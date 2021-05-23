/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFItem, HFTimerTriggerBuilder, HUTimerTriggerEditorItemManager, HUTriggerConditionEditorItemModuleController, NSArray, NSDateComponents, NSString;

@protocol HUTriggerEditorDelegate;

@interface HUTimerTriggerEditorViewController : HUItemTableViewController

{
    HFTimerTriggerBuilder *_timerTriggerBuilder;
    unsigned long long _mode;
    id <HUTriggerEditorDelegate> _delegate;
    HUTriggerConditionEditorItemModuleController *_conditionModuleController;
    HFItem *_selectedDateOptionItem;
}

@property (retain, nonatomic) HUTimerTriggerEditorItemManager *itemManager;
@property (retain, nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (retain, nonatomic) HFItem *selectedDateOptionItem;
@property (retain, nonatomic) NSDateComponents *selectedFireTimeComponents;
@property (retain, nonatomic) NSArray *selectedRecurrences;
@property (retain, nonatomic) NSDateComponents *selectedSignificantEventOffset;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)itemModuleControllers;
- (_Bool)_canCommitTriggerBuilder;
- (id)_commitTriggerBuilder;
- (id)initWithTimerTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)_showSummary:(id)arg1;
- (void)_showActionEditor:(id)arg1;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (id)_selectedSignificantEvent;
- (_Bool)_canContinue;
- (void)_changeFireTime:(id)arg1;
- (id)_instructionsSectionIDs;
- (id)_localizedRecurrenceDescripiton;
- (void)timerTriggerOffsetEditor:(id)arg1 didFinishWithOffset:(id)arg2;
- (void)timerTriggerOffsetEditorDidCancel:(id)arg1;

@end
