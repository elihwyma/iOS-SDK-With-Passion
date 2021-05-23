/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineLocationResponse : PBCodable <Swift>

{
    HDCodableRoutineLocation *_locationOfInterest;
}

@property (nonatomic, readonly) _Bool hasLocationOfInterest;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest;

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
