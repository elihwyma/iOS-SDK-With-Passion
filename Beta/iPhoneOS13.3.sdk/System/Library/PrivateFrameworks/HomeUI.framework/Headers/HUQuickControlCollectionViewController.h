/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemCollectionViewController.h>

@class HUQuickControlCollectionItemManager, HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlCollectionViewLayout, HUQuickControlContentCharacteristicWritingUpdateAdapter, NSMapTable, NSSet, NSString;

@protocol HULayoutAnchorProviding, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting;

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController

{
    _Bool _userInteractionEnabled;
    _Bool _disableItemUpdatesForOverrideCharacteristicValueChanges;
    id <HUQuickControlContentCharacteristicWritingDelegate> _characteristicWritingDelegate;
    id <HUQuickControlContentHosting> _quickControlHost;
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    HUQuickControlCollectionViewControllerLayoutOptions *_layoutOptions;
    NSMapTable *_viewControllersKeyedByItem;
    HUQuickControlContentCharacteristicWritingUpdateAdapter *_characteristicWritingAdapter;
}

@property (nonatomic, readonly) NSMapTable *viewControllersKeyedByItem;
@property (retain, nonatomic) HUQuickControlCollectionViewLayout *collectionViewLayout;
@property (nonatomic, readonly) HUQuickControlCollectionItemManager *itemManager;
@property (nonatomic, readonly) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (nonatomic) _Bool disableItemUpdatesForOverrideCharacteristicValueChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (weak, nonatomic) id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
@property (copy, nonatomic, readonly) NSSet *affectedCharacteristics;

- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)viewLayoutMarginsDidChange;
- (id)viewForTouchContinuation;
- (id)_allViewControllers;
- (id)_viewControllerForItem:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)quickControlItemHost:(id)arg1 didUpdateVisibility:(_Bool)arg2;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)overrideValueForCharacteristic:(id)arg1;
- (id)initWithItemManager:(id)arg1;
- (void)_reconfigureLayoutOptions;
- (id)_controlItemsForItem:(id)arg1;
- (unsigned long long)_titlePositionForItem:(id)arg1;
- (id)_createCellContainerForViewController:(id)arg1 forItem:(id)arg2;
- (void)_propagateInteractiveContentStateForChildViewControllers:(id)arg1;
- (id)_allContentViewControllers;
- (id)intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (double)heightForSupplementaryViewAtIndexPath:(id)arg1;

@end
