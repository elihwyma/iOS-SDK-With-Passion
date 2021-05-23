/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class NSString;

@interface STBatteryStatusDomainData : NSObject <Swift>

{
    unsigned long long _chargingState;
    unsigned long long _percentCharge;
    _Bool _batterySaverModeActive;
    NSString *_chargingDescription;
    unsigned long long _chargingDescriptionType;
}

@property (nonatomic, readonly) unsigned long long chargingState;
@property (nonatomic, readonly) unsigned long long percentCharge;
@property (nonatomic, readonly, getter=isBatterySaverModeActive) _Bool batterySaverModeActive;
@property (copy, nonatomic, readonly) NSString *chargingDescription;
@property (nonatomic, readonly) unsigned long long chargingDescriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)initWithChargingState:(unsigned long long)arg1 percentCharge:(unsigned long long)arg2 batterySaverModeActive:(_Bool)arg3 chargingDescription:(id)arg4 chargingDescriptionType:(unsigned long long)arg5;

@end
