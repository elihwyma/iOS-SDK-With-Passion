/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCodableRoutineLocation : PBCodable <Swift>

{
    double _confidence;
    double _latitude;
    double _longitude;
    double _uncertainty;
    NSData *_geoData;
    int _locationOfInterestType;
    NSString *_uuid;
    NSMutableArray *_visits;
    struct {
        unsigned int confidence:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int uncertainty:1;
        unsigned int locationOfInterestType:1;
    } _has;
}

@property (nonatomic) _Bool hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) _Bool hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool hasUncertainty;
@property (nonatomic) double uncertainty;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) _Bool hasLocationOfInterestType;
@property (nonatomic) int locationOfInterestType;
@property (nonatomic, readonly) _Bool hasGeoData;
@property (retain, nonatomic) NSData *geoData;
@property (retain, nonatomic) NSMutableArray *visits;

+ (Class)visitsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVisits:(id)arg1;
- (unsigned long long)visitsCount;
- (void)clearVisits;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (id)locationOfInterestTypeAsString:(int)arg1;
- (int)StringAsLocationOfInterestType:(id)arg1;

@end
