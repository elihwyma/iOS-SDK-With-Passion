/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <SystemStatus/STBatteryStatusDomainData.h>

@class NSString;

@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData

@property (nonatomic) unsigned long long chargingState;
@property (nonatomic) unsigned long long percentCharge;
@property (nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive;
@property (copy, nonatomic) NSString *chargingDescription;
@property (nonatomic) unsigned long long chargingDescriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)applyDiff:(id)arg1;

@end
