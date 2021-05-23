/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitBatteryStateEvent : PBCodable <Swift>

{
    unsigned long long _timestamp;
    int _batteryState;
    struct {
        unsigned int timestamp:1;
        unsigned int batteryState:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasBatteryState;
@property (nonatomic) int batteryState;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)batteryStateAsString:(int)arg1;
- (int)StringAsBatteryState:(id)arg1;

@end
