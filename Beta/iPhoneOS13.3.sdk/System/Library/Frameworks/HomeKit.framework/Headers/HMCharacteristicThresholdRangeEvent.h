/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMEvent.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCharacteristic, HMNumberRange, NSString;

@interface HMCharacteristicThresholdRangeEvent : HMEvent <Swift>

{
    HMNumberRange *_thresholdRange;
    HMCharacteristic *_characteristic;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (copy, nonatomic, readonly) HMNumberRange *thresholdRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (_Bool)isSupportedForHome:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)initWithDict:(id)arg1 characteristic:(id)arg2 thresholdRange:(id)arg3;
- (void)setThresholdRange:(id)arg1;
- (void)_updateThresholdRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2;
- (void)updateThresholdRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
