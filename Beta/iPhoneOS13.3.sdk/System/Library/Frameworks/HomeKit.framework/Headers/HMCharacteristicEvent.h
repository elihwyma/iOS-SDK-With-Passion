/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMEvent.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCharacteristic, NSString;

@protocol NSCopying;

@interface HMCharacteristicEvent : HMEvent <Swift>

{
    id <NSCopying> _triggerValue;
    HMCharacteristic *_characteristic;
}

@property (copy, nonatomic) id <NSCopying> triggerValue;
@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithDict:(id)arg1 characteristic:(id)arg2 triggerValue:(id)arg3;
- (void)_updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (void)updateTriggerValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
