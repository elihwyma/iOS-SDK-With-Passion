//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatus/STBatteryStatusDomainData.h>

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSString;

@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

- (BOOL)applyDiff:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) NSUInteger chargingDescriptionType; // @dynamic chargingDescriptionType;
@property(copy, nonatomic) NSString *chargingDescription; // @dynamic chargingDescription;
@property(nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive; // @dynamic batterySaverModeActive;
@property(nonatomic) NSUInteger percentCharge; // @dynamic percentCharge;
@property(nonatomic) NSUInteger chargingState; // @dynamic chargingState;

@end

