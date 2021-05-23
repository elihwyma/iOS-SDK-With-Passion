/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueIdentifier : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _containedBys;
    CDStruct_62a50c50 _sectionIds;
    unsigned long long _buildingId;
    unsigned long long _featureId;
    unsigned long long _fixtureId;
    unsigned long long _geminiId;
    unsigned long long _levelId;
    unsigned long long _unitId;
    unsigned long long _venueGeminiId;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _levelOrdinal;
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_featureId:1;
        unsigned int has_fixtureId:1;
        unsigned int has_geminiId:1;
        unsigned int has_levelId:1;
        unsigned int has_unitId:1;
        unsigned int has_venueGeminiId:1;
        unsigned int has_venueId:1;
        unsigned int has_levelOrdinal:1;
        unsigned int read_unknownFields:1;
        unsigned int read_containedBys:1;
        unsigned int read_sectionIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_containedBys:1;
        unsigned int wrote_sectionIds:1;
        unsigned int wrote_buildingId:1;
        unsigned int wrote_featureId:1;
        unsigned int wrote_fixtureId:1;
        unsigned int wrote_geminiId:1;
        unsigned int wrote_levelId:1;
        unsigned int wrote_unitId:1;
        unsigned int wrote_venueGeminiId:1;
        unsigned int wrote_venueId:1;
        unsigned int wrote_levelOrdinal:1;
    } _flags;
}

@property (nonatomic) _Bool hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic) _Bool hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (nonatomic) _Bool hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic, readonly) unsigned long long sectionIdsCount;
@property (nonatomic, readonly) unsigned long long *sectionIds;
@property (nonatomic) _Bool hasUnitId;
@property (nonatomic) unsigned long long unitId;
@property (nonatomic) _Bool hasFixtureId;
@property (nonatomic) unsigned long long fixtureId;
@property (nonatomic) _Bool hasLevelOrdinal;
@property (nonatomic) int levelOrdinal;
@property (nonatomic) _Bool hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic, readonly) unsigned long long containedBysCount;
@property (nonatomic, readonly) unsigned long long *containedBys;
@property (nonatomic) _Bool hasGeminiId;
@property (nonatomic) unsigned long long geminiId;
@property (nonatomic) _Bool hasVenueGeminiId;
@property (nonatomic) unsigned long long venueGeminiId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readSectionIds;
- (void)_addNoFlagsSectionId:(unsigned long long)arg1;
- (void)_readContainedBys;
- (void)_addNoFlagsContainedBy:(unsigned long long)arg1;
- (void)clearSectionIds;
- (unsigned long long)sectionIdAtIndex:(unsigned long long)arg1;
- (void)addSectionId:(unsigned long long)arg1;
- (void)clearContainedBys;
- (unsigned long long)containedByAtIndex:(unsigned long long)arg1;
- (void)addContainedBy:(unsigned long long)arg1;
- (void)setSectionIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setContainedBys:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifier:(id)arg4;

@end
