/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapItemClientAttributes, GEOMapItemInitialRequestData, GEOPDPlaceRefinementParameters, PBDataReader;

@interface GEOMapItemHandle : PBCodable

{
    PBDataReader *_reader;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOMapItemInitialRequestData *_placeRequestData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _handleType;
    struct {
        unsigned int has_handleType:1;
        unsigned int read_clientAttributes:1;
        unsigned int read_placeRefinementParameters:1;
        unsigned int read_placeRequestData:1;
        unsigned int wrote_clientAttributes:1;
        unsigned int wrote_placeRefinementParameters:1;
        unsigned int wrote_placeRequestData:1;
        unsigned int wrote_handleType:1;
    } _flags;
}

@property (nonatomic) _Bool hasHandleType;
@property (nonatomic) int handleType;
@property (nonatomic, readonly) _Bool hasPlaceRefinementParameters;
@property (retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, readonly) _Bool hasPlaceRequestData;
@property (retain, nonatomic) GEOMapItemInitialRequestData *placeRequestData;
@property (nonatomic, readonly) _Bool hasClientAttributes;
@property (retain, nonatomic) GEOMapItemClientAttributes *clientAttributes;

+ (_Bool)isValid:(id)arg1;
+ (id)handleDataForMapItem:(id)arg1;

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
- (void)clearSensitiveFields;
- (void)_readPlaceRefinementParameters;
- (void)_readClientAttributes;
- (void)_readPlaceRequestData;
- (id)handleTypeAsString:(int)arg1;
- (int)StringAsHandleType:(id)arg1;

@end
