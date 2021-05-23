/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMAccessory, HMService, NSSet;

@protocol HFCharacteristicValueSource;

@interface HFCharacteristicStateItemProvider : HFItemProvider

{
    HMAccessory *_accessory;
    HMService *_service;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_characteristicStateItems;
    NSSet *_batteryItems;
}

@property (retain, nonatomic) NSSet *characteristicStateItems;
@property (retain, nonatomic) NSSet *batteryItems;
@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

+ (id)_createBatteryItemWithSourceItem:(id)arg1 characteristicType:(id)arg2 valueFormatBlock:(CDUnknownBlockType)arg3;
+ (id)standardCharacteristicTypes;
+ (id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2 service:(id)arg3;
- (id)_reloadCharacteristicStateItems;
- (id)_reloadBatteryItems;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2;
- (CDUnknownBlockType)characteristicStateItemComparator;

@end
