//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>


@class HMAccessory;
@protocol HFCharacteristicValueSource;

@interface HFAccessoryBatteryLevelItem : HFItem <NSCopying>
{
    HMAccessory *_accessory;
    id <HFCharacteristicValueSource> _valueSource;
}

@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;

@end

