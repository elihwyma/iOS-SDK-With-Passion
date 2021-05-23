/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDLocatedInsideInfo, GEOPDVenueItemList, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterElements;
    GEOPDVenueItemList *_itemList;
    GEOPDLocatedInsideInfo *_locatedInside;
    NSMutableArray *_venueFeatureIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _featureType;
    int _goInsideLevel;
    struct {
        unsigned int has_featureType:1;
        unsigned int has_goInsideLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_filterElements:1;
        unsigned int read_itemList:1;
        unsigned int read_locatedInside:1;
        unsigned int read_venueFeatureIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_filterElements:1;
        unsigned int wrote_itemList:1;
        unsigned int wrote_locatedInside:1;
        unsigned int wrote_venueFeatureIds:1;
        unsigned int wrote_featureType:1;
        unsigned int wrote_goInsideLevel:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *venueFeatureIds;
@property (nonatomic) _Bool hasFeatureType;
@property (nonatomic) int featureType;
@property (nonatomic, readonly) _Bool hasItemList;
@property (retain, nonatomic) GEOPDVenueItemList *itemList;
@property (nonatomic, readonly) _Bool hasLocatedInside;
@property (retain, nonatomic) GEOPDLocatedInsideInfo *locatedInside;
@property (retain, nonatomic) NSMutableArray *filterElements;
@property (nonatomic) _Bool hasGoInsideLevel;
@property (nonatomic) int goInsideLevel;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)venueInfoForPlaceData:(id)arg1;
+ (Class)venueFeatureIdType;
+ (Class)filterElementType;

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
- (id)featureTypeAsString:(int)arg1;
- (int)StringAsFeatureType:(id)arg1;
- (void)_readVenueFeatureIds;
- (void)_addNoFlagsVenueFeatureId:(id)arg1;
- (void)_readItemList;
- (void)_readLocatedInside;
- (void)_readFilterElements;
- (void)_addNoFlagsFilterElement:(id)arg1;
- (unsigned long long)venueFeatureIdsCount;
- (void)clearVenueFeatureIds;
- (id)venueFeatureIdAtIndex:(unsigned long long)arg1;
- (void)addVenueFeatureId:(id)arg1;
- (unsigned long long)filterElementsCount;
- (void)clearFilterElements;
- (id)filterElementAtIndex:(unsigned long long)arg1;
- (void)addFilterElement:(id)arg1;

@end
