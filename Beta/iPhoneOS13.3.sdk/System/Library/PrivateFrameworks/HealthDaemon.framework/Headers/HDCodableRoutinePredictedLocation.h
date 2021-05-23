/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableRoutineLocation, NSData;

@interface HDCodableRoutinePredictedLocation : PBCodable <Swift>

{
    double _confidence;
    double _nextEntryTime;
    NSData *_geoData;
    HDCodableRoutineLocation *_locationOfInterest;
    int _modeOfTransportation;
    int _sourceType;
    struct {
        unsigned int confidence:1;
        unsigned int nextEntryTime:1;
        unsigned int modeOfTransportation:1;
        unsigned int sourceType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLocationOfInterest;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) _Bool hasNextEntryTime;
@property (nonatomic) double nextEntryTime;
@property (nonatomic) _Bool hasModeOfTransportation;
@property (nonatomic) int modeOfTransportation;
@property (nonatomic) _Bool hasSourceType;
@property (nonatomic) int sourceType;
@property (nonatomic, readonly) _Bool hasGeoData;
@property (retain, nonatomic) NSData *geoData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceTypeAsString:(int)arg1;
- (int)StringAsSourceType:(id)arg1;
- (id)modeOfTransportationAsString:(int)arg1;
- (int)StringAsModeOfTransportation:(id)arg1;

@end
