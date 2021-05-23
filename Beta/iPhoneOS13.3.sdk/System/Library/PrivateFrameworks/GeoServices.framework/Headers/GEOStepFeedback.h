/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBDataReader;

@interface GEOStepFeedback : PBCodable

{
    PBDataReader *_reader;
    double _completionTimeStamp;
    NSData *_routeID;
    NSData *_tripID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _routeIndex;
    unsigned int _stepID;
    _Bool _completedStep;
    _Bool _lightGuidance;
    struct {
        unsigned int has_completionTimeStamp:1;
        unsigned int has_routeIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_completedStep:1;
        unsigned int has_lightGuidance:1;
        unsigned int read_routeID:1;
        unsigned int read_tripID:1;
        unsigned int wrote_completionTimeStamp:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_tripID:1;
        unsigned int wrote_routeIndex:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_completedStep:1;
        unsigned int wrote_lightGuidance:1;
    } _flags;
}

@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasCompletionTimeStamp;
@property (nonatomic) double completionTimeStamp;
@property (nonatomic) _Bool hasCompletedStep;
@property (nonatomic) _Bool completedStep;
@property (nonatomic, readonly) _Bool hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) _Bool hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) _Bool hasLightGuidance;
@property (nonatomic) _Bool lightGuidance;
@property (nonatomic, readonly) _Bool hasTripID;
@property (retain, nonatomic) NSData *tripID;

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
- (void)_readRouteID;
- (void)_readTripID;

@end
