/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFTriggerBuilder, HUForwardingTriggerActionBuilderDelegate, HUTriggerActionFlow, HUTriggerSummaryActionGridViewController, HUTriggerSummaryItemManager, NSString;

@protocol HUTriggerEditorDelegate;

@interface HUTriggerSummaryViewController : HUItemTableViewController

{
    _Bool _viewHasAppeared;
    _Bool _isEditingExistingTrigger;
    HUTriggerSummaryActionGridViewController *_actionSetsGridViewController;
    HUTriggerSummaryActionGridViewController *_serviceActionsGridViewController;
    HFTriggerBuilder *_triggerBuilder;
    id <HUTriggerEditorDelegate> _delegate;
    HUForwardingTriggerActionBuilderDelegate *_forwardingTriggerActionBuilderDelegate;
    HUTriggerActionFlow *_flow;
}

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (nonatomic) _Bool viewHasAppeared;
@property (nonatomic, readonly) HUTriggerSummaryActionGridViewController *actionSetsGridViewController;
@property (nonatomic, readonly) HUTriggerSummaryActionGridViewController *serviceActionsGridViewController;
@property (nonatomic, readonly) HUTriggerSummaryItemManager *itemManager;
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate;
@property (nonatomic) _Bool isEditingExistingTrigger;
@property (retain, nonatomic) HUTriggerActionFlow *flow;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createTriggerSummaryViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3;
+ (_Bool)adoptsDefaultGridLayoutMargins;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_addAction:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)serviceGridViewController:(id)arg1 didTapItem:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg1;
- (id)mediaSelectionViewController:(id)arg1 messageForMediaPickerUnavailableReason:(long long)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)childViewControllersToPreload;
- (void)_preloadShortcutHomeManager;
- (_Bool)_canCommitTriggerBuilder;
- (void)_commitTriggerBuilder;
- (void)_cancelShortcutEditor:(id)arg1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (id)_durationEventBuilder;
- (void)_updateTableHeaderConfiguration;
- (void)_showEditorForTriggerBuilderItem:(id)arg1;
- (void)_showShortcutEditorForTriggerBuilderItem:(id)arg1;
- (void)_testTrigger;
- (void)_deleteTrigger:(id)arg1 indexPath:(id)arg2;
- (void)_presentMediaSelection;
- (void)_setTriggerEnabled:(_Bool)arg1;
- (void)triggerSummaryActionGridViewController:(id)arg1 didUpdateTriggerBuilder:(id)arg2;
- (void)durationPicker:(id)arg1 didSelectDuration:(id)arg2;
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 isPresentedModally:(_Bool)arg3 delegate:(id)arg4;
- (void)_removeActionsInServiceActionItem:(id)arg1;
- (id)itemTableHeaderMessage;

@end
