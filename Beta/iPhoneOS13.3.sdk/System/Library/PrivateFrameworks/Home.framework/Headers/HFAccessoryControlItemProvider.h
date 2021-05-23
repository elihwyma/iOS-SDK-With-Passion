/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFAccessoryItem, HMAccessory, NSSet;

@protocol HFCharacteristicValueSource;

@interface HFAccessoryControlItemProvider : HFItemProvider

{
    HMAccessory *_accessory;
    HFAccessoryItem *_accessoryItem;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_previousControlItems;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HFAccessoryItem *accessoryItem;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) NSSet *previousControlItems;

- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithAccessoryItem:(id)arg1;

@end
