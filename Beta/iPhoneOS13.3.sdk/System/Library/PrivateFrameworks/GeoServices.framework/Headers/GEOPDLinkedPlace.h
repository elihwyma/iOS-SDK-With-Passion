/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedPlace : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    unsigned long long _featureId;
    GEOPDMapsIdentifier *_mapsId;
    NSString *_name;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_featureId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapsId:1;
        unsigned int read_name:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_featureId:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_name:1;
        unsigned int wrote_styleAttributes:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic) _Bool hasFeatureId;
@property (nonatomic) unsigned long long featureId;
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
- (void)_readCenter;
- (void)_readName;
- (void)_readStyleAttributes;
- (void)_readMapsId;

@end
