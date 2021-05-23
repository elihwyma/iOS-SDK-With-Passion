/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPriceDescription, GEOPDRating, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSMutableArray *_childItems;
    NSMutableArray *_childPlaces;
    NSString *_locationString;
    NSString *_name;
    GEOPDPriceDescription *_priceDescription;
    GEOPDRating *_priceRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distanceDisplayThreshold;
    struct {
        unsigned int has_distanceDisplayThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_category:1;
        unsigned int read_childItems:1;
        unsigned int read_childPlaces:1;
        unsigned int read_locationString:1;
        unsigned int read_name:1;
        unsigned int read_priceDescription:1;
        unsigned int read_priceRange:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_category:1;
        unsigned int wrote_childItems:1;
        unsigned int wrote_childPlaces:1;
        unsigned int wrote_locationString:1;
        unsigned int wrote_name:1;
        unsigned int wrote_priceDescription:1;
        unsigned int wrote_priceRange:1;
        unsigned int wrote_distanceDisplayThreshold:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic, readonly) _Bool hasPriceRange;
@property (retain, nonatomic) GEOPDRating *priceRange;
@property (nonatomic, readonly) _Bool hasLocationString;
@property (retain, nonatomic) NSString *locationString;
@property (nonatomic) _Bool hasDistanceDisplayThreshold;
@property (nonatomic) unsigned int distanceDisplayThreshold;
@property (retain, nonatomic) NSMutableArray *childPlaces;
@property (nonatomic, readonly) _Bool hasPriceDescription;
@property (retain, nonatomic) GEOPDPriceDescription *priceDescription;
@property (retain, nonatomic) NSMutableArray *childItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)childPlaceType;
+ (Class)childItemType;
+ (id)resultSnippetForPlaceData:(id)arg1;

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
- (void)_readCategory;
- (void)_readName;
- (void)_readPriceRange;
- (void)_readLocationString;
- (void)_readChildPlaces;
- (void)_addNoFlagsChildPlace:(id)arg1;
- (void)_readPriceDescription;
- (void)_readChildItems;
- (void)_addNoFlagsChildItem:(id)arg1;
- (unsigned long long)childPlacesCount;
- (void)clearChildPlaces;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (void)addChildPlace:(id)arg1;
- (unsigned long long)childItemsCount;
- (void)clearChildItems;
- (id)childItemAtIndex:(unsigned long long)arg1;
- (void)addChildItem:(id)arg1;

@end
