/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCharacteristicThresholdRangeEvent.h>

@class HMCharacteristic, HMNumberRange;

@interface HMMutableCharacteristicThresholdRangeEvent : HMCharacteristicThresholdRangeEvent

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) HMNumberRange *thresholdRange;

@end
