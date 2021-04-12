//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

#import <HealthDaemon/HDDatumRendering-Protocol.h>
#import <HealthDaemon/HDHealthServiceCharacteristic-Protocol.h>

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>
{
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id )arg2;
+ (unsigned char)flagFieldLength;
+ (id)uuid;
- (id)getBinaryValueWithError:(id )arg1;
- (id)allFields;
@property(readonly, nonatomic) unsigned short elapsedTime;
@property(readonly, nonatomic) BOOL elapsedTimeIsSet;
- (id)generateDatums:(id)arg1;

@end

