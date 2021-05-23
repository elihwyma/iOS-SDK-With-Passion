/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;

@protocol HUServiceGroupEditorGridViewControllerDelegate;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController

{
    HFServiceGroupBuilder *_serviceGroupBuilder;
}

@property (retain, nonatomic) HUServiceGroupEditorGridItemManager *itemManager;
@property (nonatomic, readonly) HFServiceGroupBuilder *serviceGroupBuilder;
@property (weak, nonatomic) id <HUServiceGroupEditorGridViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)initWithServiceGroupBuilder:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)_serviceVendorItemForItem:(id)arg1;
- (void)didDeselectItem:(id)arg1;

@end
