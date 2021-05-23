/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFTimeRangeCondition, HUTriggerTimeConditionDetailEditorItemManager, NSString;

@protocol HUTriggerTimeConditionDetailEditorDelegate;

@interface HUTriggerTimeConditionDetailEditorViewController : HUItemTableViewController

{
    id <HUTriggerTimeConditionDetailEditorDelegate> _delegate;
}

@property (nonatomic, readonly) HUTriggerTimeConditionDetailEditorItemManager *itemManager;
@property (nonatomic, readonly) HFTimeRangeCondition *rangeCondition;
@property (weak, nonatomic, readonly) id <HUTriggerTimeConditionDetailEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)initWithRangeCondition:(id)arg1 delegate:(id)arg2;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;
- (void)datePickerCell:(id)arg1 didSelectDate:(id)arg2;
- (id)allCellClasses;

@end
