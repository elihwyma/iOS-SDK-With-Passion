/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueLabel, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueBuilding : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _directoryGroupingIds;
    CDStruct_62a50c50 _levelIds;
    unsigned long long _buildingId;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_directoryGroupingIds:1;
        unsigned int read_levelIds:1;
        unsigned int read_label:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_directoryGroupingIds:1;
        unsigned int wrote_levelIds:1;
        unsigned int wrote_buildingId:1;
        unsigned int wrote_label:1;
        unsigned int wrote_muid:1;
    } _flags;
}

@property (nonatomic) _Bool hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long levelIdsCount;
@property (nonatomic, readonly) unsigned long long *levelIds;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) unsigned long long directoryGroupingIdsCount;
@property (nonatomic, readonly) unsigned long long *directoryGroupingIds;
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
- (void)_readLabel;
- (void)_readLevelIds;
- (void)_addNoFlagsLevelId:(unsigned long long)arg1;
- (void)_readDirectoryGroupingIds;
- (void)_addNoFlagsDirectoryGroupingId:(unsigned long long)arg1;
- (void)clearLevelIds;
- (unsigned long long)levelIdAtIndex:(unsigned long long)arg1;
- (void)addLevelId:(unsigned long long)arg1;
- (void)clearDirectoryGroupingIds;
- (unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1;
- (void)addDirectoryGroupingId:(unsigned long long)arg1;
- (void)setLevelIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setDirectoryGroupingIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
