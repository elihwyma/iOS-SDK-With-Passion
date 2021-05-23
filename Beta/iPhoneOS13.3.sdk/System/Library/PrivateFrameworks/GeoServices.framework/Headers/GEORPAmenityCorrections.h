/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

@interface GEORPAmenityCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _addedAmenities;
    CDStruct_95bda58d _removedAmenities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addedAmenities:1;
        unsigned int read_removedAmenities:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addedAmenities:1;
        unsigned int wrote_removedAmenities:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long addedAmenitiesCount;
@property (nonatomic, readonly) int *addedAmenities;
@property (nonatomic, readonly) unsigned long long removedAmenitiesCount;
@property (nonatomic, readonly) int *removedAmenities;
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
- (void)_readAddedAmenities;
- (void)_addNoFlagsAddedAmenities:(int)arg1;
- (void)_readRemovedAmenities;
- (void)_addNoFlagsRemovedAmenities:(int)arg1;
- (void)clearAddedAmenities;
- (int)addedAmenitiesAtIndex:(unsigned long long)arg1;
- (void)addAddedAmenities:(int)arg1;
- (void)clearRemovedAmenities;
- (int)removedAmenitiesAtIndex:(unsigned long long)arg1;
- (void)addRemovedAmenities:(int)arg1;
- (void)setAddedAmenities:(int *)arg1 count:(unsigned long long)arg2;
- (id)addedAmenitiesAsString:(int)arg1;
- (int)StringAsAddedAmenities:(id)arg1;
- (void)setRemovedAmenities:(int *)arg1 count:(unsigned long long)arg2;
- (id)removedAmenitiesAsString:(int)arg1;
- (int)StringAsRemovedAmenities:(id)arg1;

@end
