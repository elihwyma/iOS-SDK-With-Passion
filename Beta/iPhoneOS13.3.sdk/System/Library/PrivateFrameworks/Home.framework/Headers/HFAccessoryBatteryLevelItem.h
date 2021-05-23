/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory;

@protocol HFCharacteristicValueSource;

@interface HFAccessoryBatteryLevelItem : HFItem <Swift>

{
    HMAccessory *_accessory;
    id <HFCharacteristicValueSource> _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
