/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFMediaSystemBuilder, HUMediaSystemEditorGridItemManager;

@protocol HUMediaSystemEditorGridViewControllerDelegate;

@interface HUMediaSystemEditorGridViewController : HUSelectableServiceGridViewController

{
    HFMediaSystemBuilder *_mediaSystemBuilder;
}

@property (retain, nonatomic) HUMediaSystemEditorGridItemManager *itemManager;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (weak, nonatomic) id <HUMediaSystemEditorGridViewControllerDelegate> delegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (void)didDeselectItem:(id)arg1;
- (id)initWithMediaSystemBuilder:(id)arg1;
- (void)_resetBuilder;
- (id)_accessoryVendorItemForItem:(id)arg1;
- (void)addItemToSelection:(id)arg1;
- (void)_addItemToMediaSystem:(id)arg1;
- (_Bool)_wantsToggleButtonForSection:(unsigned long long)arg1;

@end
