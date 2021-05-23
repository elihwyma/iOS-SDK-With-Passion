/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateDeviceBase : PBCodable

{
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    _Bool _deviceInVehicle;
    struct {
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_deviceInVehicle:1;
    } _flags;
}

@property (nonatomic) _Bool hasDeviceInterfaceOrientation;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) _Bool hasDeviceBatteryState;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) _Bool hasDeviceInVehicle;
@property (nonatomic) _Bool deviceInVehicle;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
- (int)StringAsDeviceBatteryState:(id)arg1;

@end
