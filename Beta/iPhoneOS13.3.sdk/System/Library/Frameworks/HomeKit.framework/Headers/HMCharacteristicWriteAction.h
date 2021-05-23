/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAction.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction : HMAction <Swift>

{
    HMCharacteristic *_characteristic;
    id _targetValue;
}

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) id targetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)requiresDeviceUnlock;
- (id)encodeAsProtoBuf;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;
- (id)commonInitWith:(id)arg1 targetValue:(id)arg2;
- (void)_updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allowedTargetValueClasses;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3;
- (_Bool)isKindOfAllowedTargetValueClass:(id)arg1;
- (void)updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithProtoBuf:(id)arg1 home:(id)arg2;

@end
