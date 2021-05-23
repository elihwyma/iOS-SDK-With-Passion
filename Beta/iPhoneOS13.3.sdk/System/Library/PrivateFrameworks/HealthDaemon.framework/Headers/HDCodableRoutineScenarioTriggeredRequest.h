/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <Swift>

{
    unsigned long long _triggerTypes;
    HDCodableRoutineLocation *_currentLocation;
    struct {
        unsigned int triggerTypes:1;
    } _has;
}

@property (nonatomic) _Bool hasTriggerTypes;
@property (nonatomic) unsigned long long triggerTypes;
@property (nonatomic, readonly) _Bool hasCurrentLocation;
@property (retain, nonatomic) HDCodableRoutineLocation *currentLocation;

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
