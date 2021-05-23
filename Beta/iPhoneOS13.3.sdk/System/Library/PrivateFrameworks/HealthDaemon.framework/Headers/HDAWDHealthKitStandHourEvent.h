/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitStandHourEvent : PBCodable <Swift>

{
    long long _standHourTimestamp;
    unsigned long long _timestamp;
    _Bool _didStand;
    struct {
        unsigned int standHourTimestamp:1;
        unsigned int timestamp:1;
        unsigned int didStand:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasStandHourTimestamp;
@property (nonatomic) long long standHourTimestamp;
@property (nonatomic) _Bool hasDidStand;
@property (nonatomic) _Bool didStand;

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
