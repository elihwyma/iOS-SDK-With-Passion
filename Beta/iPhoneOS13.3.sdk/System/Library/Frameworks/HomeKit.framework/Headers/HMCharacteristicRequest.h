/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMCharacteristic;

@interface HMCharacteristicRequest : NSObject

{
    HMCharacteristic *_characteristic;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;

- (id)initWithCharacteristic:(id)arg1;

@end
