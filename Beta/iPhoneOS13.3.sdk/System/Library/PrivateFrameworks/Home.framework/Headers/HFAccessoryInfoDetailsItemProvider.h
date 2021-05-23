/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFAccessoryInfoItem, HMAccessory, HMHome, NSMutableSet;

@protocol HFCharacteristicValueSource;

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider

{
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    NSMutableSet *_accessoryInfoDetailItems;
    HMAccessory *_accessory;
    HFAccessoryInfoItem *_firmwareItem;
    HFAccessoryInfoItem *_softwareItem;
    HFAccessoryInfoItem *_wifiItem;
}

@property (retain, nonatomic) NSMutableSet *accessoryInfoDetailItems;
@property (retain, nonatomic) HMAccessory *accessory;
@property (nonatomic, readonly) HFAccessoryInfoItem *firmwareItem;
@property (nonatomic, readonly) HFAccessoryInfoItem *softwareItem;
@property (nonatomic, readonly) HFAccessoryInfoItem *wifiItem;
@property (nonatomic, readonly) HMHome *home;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;

+ (id)preferredCharacteristicOrderArray;
+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;
+ (CDUnknownBlockType)accessoryInfoServiceDetailComparator;

- (id)init;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 accessory:(id)arg2;
- (_Bool)canToggleAccessoryInfoItem:(id)arg1;
- (void)toggleAccessoryInfoItem:(id)arg1;

@end
