/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOLatLngE7, NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiBSS : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _attributes;
    NSString *_identifier;
    GEOLatLngE7 *_latLngE7;
    GEOLatLng *_location;
    NSMutableArray *_qualities;
    long long _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_uniqueIdentifier:1;
        unsigned int read_attributes:1;
        unsigned int read_identifier:1;
        unsigned int read_latLngE7:1;
        unsigned int read_location:1;
        unsigned int read_qualities:1;
        unsigned int wrote_attributes:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_latLngE7:1;
        unsigned int wrote_location:1;
        unsigned int wrote_qualities:1;
        unsigned int wrote_uniqueIdentifier:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, readonly) int *attributes;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) _Bool hasUniqueIdentifier;
@property (nonatomic) long long uniqueIdentifier;
@property (nonatomic, readonly) _Bool hasLatLngE7;
@property (retain, nonatomic) GEOLatLngE7 *latLngE7;

+ (_Bool)isValid:(id)arg1;
+ (Class)qualitiesType;

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
- (void)_readQualities;
- (void)_addNoFlagsQualities:(id)arg1;
- (unsigned long long)qualitiesCount;
- (void)clearQualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (void)addQualities:(id)arg1;
- (void)_readLocation;
- (void)_readIdentifier;
- (void)_readAttributes;
- (void)_addNoFlagsAttributes:(int)arg1;
- (void)clearAttributes;
- (int)attributesAtIndex:(unsigned long long)arg1;
- (void)addAttributes:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (id)attributesAsString:(int)arg1;
- (int)StringAsAttributes:(id)arg1;
- (void)_readLatLngE7;

@end
