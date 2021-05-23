/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDLinkedPlace, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDContainedPlace : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_childPlaces;
    unsigned long long _featureId;
    GEOPDLinkedPlace *_parentPlace;
    NSMutableArray *_siblingPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childPlaces:1;
        unsigned int read_parentPlace:1;
        unsigned int read_siblingPlaces:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_childPlaces:1;
        unsigned int wrote_featureId:1;
        unsigned int wrote_parentPlace:1;
        unsigned int wrote_siblingPlaces:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasParentPlace;
@property (retain, nonatomic) GEOPDLinkedPlace *parentPlace;
@property (retain, nonatomic) NSMutableArray *childPlaces;
@property (nonatomic) _Bool hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (retain, nonatomic) NSMutableArray *siblingPlaces;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)childPlaceType;
+ (Class)siblingPlaceType;

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
- (void)_readChildPlaces;
- (void)_addNoFlagsChildPlace:(id)arg1;
- (unsigned long long)childPlacesCount;
- (void)clearChildPlaces;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (void)addChildPlace:(id)arg1;
- (unsigned long long)siblingPlacesCount;
- (void)_readParentPlace;
- (void)_readSiblingPlaces;
- (void)_addNoFlagsSiblingPlace:(id)arg1;
- (void)clearSiblingPlaces;
- (id)siblingPlaceAtIndex:(unsigned long long)arg1;
- (void)addSiblingPlace:(id)arg1;

@end
