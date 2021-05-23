/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineLocationVisitEvent : PBCodable <Swift>

{
    long long _arrivalDate;
    unsigned long long _timestamp;
    HDAWDHealthKitRoutineLocation *_location;
    struct {
        unsigned int arrivalDate:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) HDAWDHealthKitRoutineLocation *location;
@property (nonatomic) _Bool hasArrivalDate;
@property (nonatomic) long long arrivalDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
