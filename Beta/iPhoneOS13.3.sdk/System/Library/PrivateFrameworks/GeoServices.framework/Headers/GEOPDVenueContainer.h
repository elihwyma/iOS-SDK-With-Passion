/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueLabel, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueContainer : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _buildingIds;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _browseType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_venueId:1;
        unsigned int has_browseType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_buildingIds:1;
        unsigned int read_label:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buildingIds:1;
        unsigned int wrote_label:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_venueId:1;
        unsigned int wrote_browseType:1;
    } _flags;
}

@property (nonatomic) _Bool hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic, readonly) unsigned long long buildingIdsCount;
@property (nonatomic, readonly) unsigned long long *buildingIds;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
@property (nonatomic) _Bool hasBrowseType;
@property (nonatomic) int browseType;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
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
- (void)_readBuildingIds;
- (void)_addNoFlagsBuildingId:(unsigned long long)arg1;
- (void)clearBuildingIds;
- (unsigned long long)buildingIdAtIndex:(unsigned long long)arg1;
- (void)addBuildingId:(unsigned long long)arg1;
- (void)setBuildingIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)browseTypeAsString:(int)arg1;
- (int)StringAsBrowseType:(id)arg1;

@end
