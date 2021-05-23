/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOVectorTileRequest : PBCodable

{
    PBDataReader *_reader;
    NSString *_accessKey;
    NSString *_countryCode;
    NSString *_languageCode;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _latitudeHint;
    float _longitudeHint;
    unsigned int _scale;
    unsigned int _size;
    unsigned int _style;
    unsigned int _version;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    _Bool _preflight;
    _Bool _venuesPreflight;
    _Bool _vloc;
    struct {
        unsigned int has_lineId:1;
        unsigned int has_latitudeHint:1;
        unsigned int has_longitudeHint:1;
        unsigned int has_scale:1;
        unsigned int has_size:1;
        unsigned int has_style:1;
        unsigned int has_version:1;
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
        unsigned int has_preflight:1;
        unsigned int has_venuesPreflight:1;
        unsigned int has_vloc:1;
        unsigned int read_accessKey:1;
        unsigned int read_countryCode:1;
        unsigned int read_languageCode:1;
        unsigned int wrote_accessKey:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_languageCode:1;
        unsigned int wrote_lineId:1;
        unsigned int wrote_latitudeHint:1;
        unsigned int wrote_longitudeHint:1;
        unsigned int wrote_scale:1;
        unsigned int wrote_size:1;
        unsigned int wrote_style:1;
        unsigned int wrote_version:1;
        unsigned int wrote_x:1;
        unsigned int wrote_y:1;
        unsigned int wrote_z:1;
        unsigned int wrote_preflight:1;
        unsigned int wrote_venuesPreflight:1;
        unsigned int wrote_vloc:1;
    } _flags;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) _Bool hasZ;
@property (nonatomic) unsigned int z;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasStyle;
@property (nonatomic) unsigned int style;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) _Bool hasPreflight;
@property (nonatomic) _Bool preflight;
@property (nonatomic) _Bool hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) unsigned int size;
@property (nonatomic) _Bool hasScale;
@property (nonatomic) unsigned int scale;
@property (nonatomic, readonly) _Bool hasAccessKey;
@property (retain, nonatomic) NSString *accessKey;
@property (nonatomic) _Bool hasLongitudeHint;
@property (nonatomic) float longitudeHint;
@property (nonatomic) _Bool hasLatitudeHint;
@property (nonatomic) float latitudeHint;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) _Bool hasVenuesPreflight;
@property (nonatomic) _Bool venuesPreflight;
@property (nonatomic) _Bool hasVloc;
@property (nonatomic) _Bool vloc;

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
- (void)_readLanguageCode;
- (void)_readCountryCode;
- (void)_readAccessKey;

@end
