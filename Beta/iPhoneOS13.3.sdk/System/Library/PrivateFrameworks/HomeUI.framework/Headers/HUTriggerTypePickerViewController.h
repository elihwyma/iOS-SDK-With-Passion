/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFActionSetBuilder, HUTriggerTypePickerItemManager;

@protocol HUTriggerEditorDelegate;

@interface HUTriggerTypePickerViewController : HUItemTableViewController

{
    id <HUTriggerEditorDelegate> _delegate;
    HFActionSetBuilder *_actionSetBuilder;
}

@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (nonatomic, readonly) HUTriggerTypePickerItemManager *itemManager;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)_createTriggerEditorForItem:(id)arg1;
- (id)_createTriggerBuilderOfClass:(Class)arg1;

@end
