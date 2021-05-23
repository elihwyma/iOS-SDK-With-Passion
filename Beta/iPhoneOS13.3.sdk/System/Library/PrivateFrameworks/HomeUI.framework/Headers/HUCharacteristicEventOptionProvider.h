/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HFItem, HMHome, NSMutableSet;

@protocol HFCharacteristicValueSource, HFServiceVendor;

@interface HUCharacteristicEventOptionProvider : HFItemProvider

{
    HMHome *_home;
    CDUnknownBlockType _filter;
    HFItem<HFServiceVendor> *_serviceVendingItem;
    NSMutableSet *_optionItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property (retain, nonatomic) NSMutableSet *optionItems;
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem;
@property (retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic) CDUnknownBlockType filter;

+ (_Bool)hasOptionsForAnyServiceInHome:(id)arg1;
+ (_Bool)hasOptionsForServiceVendingItem:(id)arg1 outCharacteristicType:(id *)arg2;
+ (_Bool)homeHubUpdateRequiredForServiceVendingItem:(id)arg1 forHome:(id)arg2;
+ (_Bool)_hasOptionsForServices:(id)arg1 outCharacteristicType:(id *)arg2;
+ (id)_supportedCharacteristicTypes;
+ (id)_characteristicTypesRequiringUpdatedHomeHubs;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)valueSource;
- (id)invalidationReasons;
- (void)setValueSource:(id)arg1;
- (id)initWithServiceVendingItem:(id)arg1 home:(id)arg2;
- (id)_notifyingCharacteristicsKeyedByTypeForServices:(id)arg1;
- (id)_optionsForCharacteristicType:(id)arg1 characteristics:(id)arg2;

@end
