/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFActionSetBuilder;

@protocol HUSceneServicePickerViewControllerDelegate;

@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController

{
    id <HUSceneServicePickerViewControllerDelegate> _servicePickerDelegate;
    HFActionSetBuilder *_actionSetBuilder;
}

@property (weak, nonatomic) id <HUSceneServicePickerViewControllerDelegate> servicePickerDelegate;
@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1 servicePickerDelegate:(id)arg2;
- (id)_updateActionSetBuilder;
- (_Bool)_canSelectMediaAccessoryItem:(id)arg1;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;

@end
