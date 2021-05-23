/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSData, NSString, PBDataReader;

@interface GEORPDirectionsEvent : PBCodable

{
    PBDataReader *_reader;
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    NSData *_occurrenceRouteId;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _occurrenceResponseIndex;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    int _synthesizedStepManeuverType;
    int _type;
    struct {
        unsigned int has_errorCode:1;
        unsigned int has_occurrenceResponseIndex:1;
        unsigned int has_occurrenceStepIndex:1;
        unsigned int has_switchedToResponseIndex:1;
        unsigned int has_synthesizedStepManeuverType:1;
        unsigned int has_type:1;
        unsigned int read_errorDomain:1;
        unsigned int read_occurrenceLatLng:1;
        unsigned int read_occurrenceRouteId:1;
        unsigned int read_switchedToRouteId:1;
        unsigned int read_synthesizedStepInstructions:1;
        unsigned int wrote_errorCode:1;
        unsigned int wrote_errorDomain:1;
        unsigned int wrote_occurrenceLatLng:1;
        unsigned int wrote_occurrenceRouteId:1;
        unsigned int wrote_switchedToRouteId:1;
        unsigned int wrote_synthesizedStepInstructions:1;
        unsigned int wrote_occurrenceResponseIndex:1;
        unsigned int wrote_occurrenceStepIndex:1;
        unsigned int wrote_switchedToResponseIndex:1;
        unsigned int wrote_synthesizedStepManeuverType:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasOccurrenceResponseIndex;
@property (nonatomic) unsigned int occurrenceResponseIndex;
@property (nonatomic, readonly) _Bool hasOccurrenceRouteId;
@property (retain, nonatomic) NSData *occurrenceRouteId;
@property (nonatomic) _Bool hasOccurrenceStepIndex;
@property (nonatomic) unsigned int occurrenceStepIndex;
@property (nonatomic, readonly) _Bool hasOccurrenceLatLng;
@property (retain, nonatomic) GEOLatLng *occurrenceLatLng;
@property (nonatomic) _Bool hasSwitchedToResponseIndex;
@property (nonatomic) unsigned int switchedToResponseIndex;
@property (nonatomic, readonly) _Bool hasSwitchedToRouteId;
@property (retain, nonatomic) NSData *switchedToRouteId;
@property (nonatomic) _Bool hasSynthesizedStepManeuverType;
@property (nonatomic) int synthesizedStepManeuverType;
@property (nonatomic, readonly) _Bool hasSynthesizedStepInstructions;
@property (retain, nonatomic) NSString *synthesizedStepInstructions;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readOccurrenceRouteId;
- (void)_readOccurrenceLatLng;
- (void)_readSwitchedToRouteId;
- (void)_readSynthesizedStepInstructions;
- (void)_readErrorDomain;
- (id)synthesizedStepManeuverTypeAsString:(int)arg1;
- (int)StringAsSynthesizedStepManeuverType:(id)arg1;

@end
