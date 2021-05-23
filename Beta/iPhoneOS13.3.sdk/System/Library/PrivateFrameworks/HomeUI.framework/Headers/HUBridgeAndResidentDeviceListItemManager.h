/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFBridgeItemProvider, HFResidentDeviceItemProvider, HMHome;

@interface HUBridgeAndResidentDeviceListItemManager : HFItemManager

{
    HMHome *_overrideHome;
    HFBridgeItemProvider *_bridgeItemProvider;
    HFResidentDeviceItemProvider *_residentDeviceItemProvider;
}

@property (nonatomic, readonly) HMHome *overrideHome;
@property (retain, nonatomic) HFBridgeItemProvider *bridgeItemProvider;
@property (retain, nonatomic) HFResidentDeviceItemProvider *residentDeviceItemProvider;

+ (CDUnknownBlockType)residentDeviceItemComparator;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (_Bool)isBridgeItem:(id)arg1;
- (_Bool)isResidentDeviceItem:(id)arg1;

@end
