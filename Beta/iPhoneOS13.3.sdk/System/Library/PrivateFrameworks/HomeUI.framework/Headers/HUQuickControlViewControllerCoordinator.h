/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HFOverrideCharacteristicValueSource, HFSimpleItemManager, HMHome, HUQuickControlContentCharacteristicWritingUpdateAdapter, HUQuickControlViewController, NSSet, NSString;

@protocol HFIconDescriptor, HUQuickControlContentHosting, HUQuickControlViewControllerCoordinatorDelegate, NSCopying;

@interface HUQuickControlViewControllerCoordinator : NSObject <Swift>

{
    _Bool _controlsVisible;
    _Bool _showIconOffState;
    _Bool _reachable;
    HMHome *_home;
    HFItem<NSCopying> *_item;
    id <HUQuickControlViewControllerCoordinatorDelegate> _delegate;
    id <HUQuickControlContentHosting> _controlHost;
    HUQuickControlViewController *_activeController;
    id <HFIconDescriptor> _iconDescriptor;
    NSString *_primaryStatusText;
    NSString *_secondaryStatusText;
    HFOverrideCharacteristicValueSource *_valueSource;
    HFSimpleItemManager *_itemManager;
    NSSet *_controlItems;
    HFItem *_reachabilityItem;
    HFSimpleItemManager *_reachabilityItemManager;
    HUQuickControlContentCharacteristicWritingUpdateAdapter *_characteristicWritingAdapter;
}

@property (retain, nonatomic) HUQuickControlViewController *activeController;
@property (copy, nonatomic) NSString *primaryStatusText;
@property (copy, nonatomic) NSString *secondaryStatusText;
@property (nonatomic, readonly) HFOverrideCharacteristicValueSource *valueSource;
@property (nonatomic, readonly) HFSimpleItemManager *itemManager;
@property (nonatomic, readonly) NSSet *controlItems;
@property (nonatomic, readonly) HFItem *reachabilityItem;
@property (nonatomic, readonly) HFSimpleItemManager *reachabilityItemManager;
@property (nonatomic, readonly) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem<NSCopying> *item;
@property (weak, nonatomic) id <HUQuickControlViewControllerCoordinatorDelegate> delegate;
@property (weak, nonatomic) id <HUQuickControlContentHosting> controlHost;
@property (nonatomic, getter=areControlsVisible) _Bool controlsVisible;
@property (nonatomic, readonly) id <HFIconDescriptor> iconDescriptor;
@property (nonatomic, readonly) _Bool showIconOffState;
@property (nonatomic, readonly, getter=isReachable) _Bool reachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (_Bool)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2;
- (id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2;
- (void)quickControlViewControllerDidUpdateStatusOverrides:(id)arg1;
- (id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(_Bool)arg2;
- (id)_secondaryStatusTextForLatestResults:(id)arg1;
- (void)_createControlViewControllersForControlItems:(id)arg1;
- (void)_updateIconDescriptorNotifyingDelegate:(_Bool)arg1;
- (void)_updateStatusTextNotifyingDelegate:(_Bool)arg1;
- (void)_updateReachabilityStateNotifiyingDelegate:(_Bool)arg1;
- (id)_itemToUseForIconAndStatus;
- (id)_controllerForControllableCharacteristic:(id)arg1;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3 delegate:(id)arg4;

@end
