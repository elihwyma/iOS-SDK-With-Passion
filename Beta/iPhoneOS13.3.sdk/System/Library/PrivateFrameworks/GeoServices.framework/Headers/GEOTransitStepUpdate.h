/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOInstructionSet, GEOTransitScheduleInfo, GEOTransitVehiclePositionInfo, NSData, PBDataReader, PBUnknownFields;

@interface GEOTransitStepUpdate : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOInstructionSet *_instructions;
    GEOTransitScheduleInfo *_scheduleInfo;
    NSData *_updateIdentifier;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_instructions:1;
        unsigned int read_scheduleInfo:1;
        unsigned int read_updateIdentifier:1;
        unsigned int read_vehiclePositionInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_instructions:1;
        unsigned int wrote_scheduleInfo:1;
        unsigned int wrote_updateIdentifier:1;
        unsigned int wrote_vehiclePositionInfo:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUpdateIdentifier;
@property (retain, nonatomic) NSData *updateIdentifier;
@property (nonatomic, readonly) _Bool hasInstructions;
@property (retain, nonatomic) GEOInstructionSet *instructions;
@property (nonatomic, readonly) _Bool hasVehiclePositionInfo;
@property (retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property (nonatomic, readonly) _Bool hasScheduleInfo;
@property (retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readInstructions;
- (void)_readUpdateIdentifier;
- (void)_readVehiclePositionInfo;
- (void)_readScheduleInfo;

@end
