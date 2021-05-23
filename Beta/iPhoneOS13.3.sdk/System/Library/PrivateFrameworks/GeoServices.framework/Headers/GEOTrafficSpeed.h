/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTrafficPath, GEOTrafficPredictedPaces, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficSpeed : PBCodable

{
    PBDataReader *_reader;
    GEOTrafficPath *_path;
    GEOTrafficPredictedPaces *_predictedPaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _color;
    unsigned int _confidence;
    float _freeFlowSpeedKph;
    unsigned int _observationCount;
    float _speedKph;
    struct {
        unsigned int has_color:1;
        unsigned int has_confidence:1;
        unsigned int has_freeFlowSpeedKph:1;
        unsigned int has_observationCount:1;
        unsigned int has_speedKph:1;
        unsigned int read_path:1;
        unsigned int read_predictedPaces:1;
        unsigned int wrote_path:1;
        unsigned int wrote_predictedPaces:1;
        unsigned int wrote_color:1;
        unsigned int wrote_confidence:1;
        unsigned int wrote_freeFlowSpeedKph:1;
        unsigned int wrote_observationCount:1;
        unsigned int wrote_speedKph:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPath;
@property (retain, nonatomic) GEOTrafficPath *path;
@property (nonatomic) _Bool hasSpeedKph;
@property (nonatomic) float speedKph;
@property (nonatomic) _Bool hasColor;
@property (nonatomic) int color;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) _Bool hasFreeFlowSpeedKph;
@property (nonatomic) float freeFlowSpeedKph;
@property (nonatomic) _Bool hasObservationCount;
@property (nonatomic) unsigned int observationCount;
@property (nonatomic, readonly) _Bool hasPredictedPaces;
@property (retain, nonatomic) GEOTrafficPredictedPaces *predictedPaces;

+ (_Bool)isValid:(id)arg1;

- (id)init;
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
- (id)colorAsString:(int)arg1;
- (int)StringAsColor:(id)arg1;
- (void)_readPath;
- (void)_readPredictedPaces;

@end
