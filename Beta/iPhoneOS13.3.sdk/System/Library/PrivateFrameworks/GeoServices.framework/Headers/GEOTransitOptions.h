/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFareOptions, PBDataReader, PBUnknownFields;

@interface GEOTransitOptions : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _avoidedModes;
    GEOFareOptions *_fareOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _prioritization;
    int _routingBehavior;
    struct {
        unsigned int has_prioritization:1;
        unsigned int has_routingBehavior:1;
        unsigned int read_unknownFields:1;
        unsigned int read_avoidedModes:1;
        unsigned int read_fareOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_avoidedModes:1;
        unsigned int wrote_fareOptions:1;
        unsigned int wrote_prioritization:1;
        unsigned int wrote_routingBehavior:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long avoidedModesCount;
@property (nonatomic, readonly) int *avoidedModes;
@property (nonatomic) _Bool hasPrioritization;
@property (nonatomic) int prioritization;
@property (nonatomic, readonly) _Bool hasFareOptions;
@property (retain, nonatomic) GEOFareOptions *fareOptions;
@property (nonatomic) _Bool hasRoutingBehavior;
@property (nonatomic) int routingBehavior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (id)avoidedModesAsString:(int)arg1;
- (void)_readAvoidedModes;
- (void)_addNoFlagsAvoidedMode:(int)arg1;
- (void)_readFareOptions;
- (void)clearAvoidedModes;
- (void)addAvoidedMode:(int)arg1;
- (void)setAvoidedModes:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsAvoidedModes:(id)arg1;
- (id)prioritizationAsString:(int)arg1;
- (int)StringAsPrioritization:(id)arg1;
- (id)routingBehaviorAsString:(int)arg1;
- (int)StringAsRoutingBehavior:(id)arg1;

@end
