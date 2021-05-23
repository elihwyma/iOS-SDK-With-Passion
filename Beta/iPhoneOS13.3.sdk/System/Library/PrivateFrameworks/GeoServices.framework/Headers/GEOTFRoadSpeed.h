/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFRoadSpeed : PBCodable

{
    PBDataReader *_reader;
    CDStruct_5df41632 _geoIds;
    CDStruct_fae3dc92 _latitudeCoordinates;
    CDStruct_fae3dc92 _longitudeCoordinates;
    long long _geoid;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    NSData *_zilch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    unsigned int _speedKph;
    float _startOffset;
    _Bool _hidden;
    struct {
        unsigned int has_color:1;
        unsigned int has_confidence:1;
        unsigned int has_decayTimeWindowInMinutes:1;
        unsigned int has_endOffset:1;
        unsigned int has_speedKph:1;
        unsigned int has_startOffset:1;
        unsigned int has_hidden:1;
        unsigned int read_geoIds:1;
        unsigned int read_latitudeCoordinates:1;
        unsigned int read_longitudeCoordinates:1;
        unsigned int read_openlr:1;
        unsigned int read_predictedSpeeds:1;
        unsigned int read_zilch:1;
        unsigned int wrote_geoIds:1;
        unsigned int wrote_latitudeCoordinates:1;
        unsigned int wrote_longitudeCoordinates:1;
        unsigned int wrote_geoid:1;
        unsigned int wrote_openlr:1;
        unsigned int wrote_predictedSpeeds:1;
        unsigned int wrote_zilch:1;
        unsigned int wrote_color:1;
        unsigned int wrote_confidence:1;
        unsigned int wrote_decayTimeWindowInMinutes:1;
        unsigned int wrote_endOffset:1;
        unsigned int wrote_speedKph:1;
        unsigned int wrote_startOffset:1;
        unsigned int wrote_hidden:1;
    } _flags;
}

@property (nonatomic) long long geoid;
@property (nonatomic) _Bool hasStartOffset;
@property (nonatomic) float startOffset;
@property (nonatomic) _Bool hasEndOffset;
@property (nonatomic) float endOffset;
@property (nonatomic) _Bool hasHidden;
@property (nonatomic) _Bool hidden;
@property (retain, nonatomic) NSMutableArray *predictedSpeeds;
@property (nonatomic) _Bool hasColor;
@property (nonatomic) int color;
@property (nonatomic) _Bool hasSpeedKph;
@property (nonatomic) unsigned int speedKph;
@property (nonatomic, readonly) _Bool hasZilch;
@property (retain, nonatomic) NSData *zilch;
@property (nonatomic) _Bool hasDecayTimeWindowInMinutes;
@property (nonatomic) unsigned int decayTimeWindowInMinutes;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) float confidence;
@property (nonatomic, readonly) unsigned long long latitudeCoordinatesCount;
@property (nonatomic, readonly) float *latitudeCoordinates;
@property (nonatomic, readonly) unsigned long long longitudeCoordinatesCount;
@property (nonatomic, readonly) float *longitudeCoordinates;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic, readonly) long long *geoIds;
@property (nonatomic, readonly) _Bool hasOpenlr;
@property (retain, nonatomic) NSData *openlr;

+ (_Bool)isValid:(id)arg1;
+ (Class)predictedSpeedType;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readGeoIds;
- (void)_addNoFlagsGeoIds:(long long)arg1;
- (void)_readPredictedSpeeds;
- (void)_addNoFlagsPredictedSpeed:(id)arg1;
- (void)_readOpenlr;
- (void)clearGeoIds;
- (long long)geoIdsAtIndex:(unsigned long long)arg1;
- (void)addGeoIds:(long long)arg1;
- (unsigned long long)predictedSpeedsCount;
- (void)clearPredictedSpeeds;
- (id)predictedSpeedAtIndex:(unsigned long long)arg1;
- (void)addPredictedSpeed:(id)arg1;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (id)colorAsString:(int)arg1;
- (int)StringAsColor:(id)arg1;
- (void)_readZilch;
- (void)_readLatitudeCoordinates;
- (void)_addNoFlagsLatitudeCoordinates:(float)arg1;
- (void)_readLongitudeCoordinates;
- (void)_addNoFlagsLongitudeCoordinates:(float)arg1;
- (void)clearLatitudeCoordinates;
- (float)latitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (void)addLatitudeCoordinates:(float)arg1;
- (void)clearLongitudeCoordinates;
- (float)longitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (void)addLongitudeCoordinates:(float)arg1;
- (void)setLatitudeCoordinates:(float *)arg1 count:(unsigned long long)arg2;
- (void)setLongitudeCoordinates:(float *)arg1 count:(unsigned long long)arg2;

@end
