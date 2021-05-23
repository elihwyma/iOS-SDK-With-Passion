/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSString, PBDataReader;

@interface GEORPUpdatedLabel : PBCodable

{
    PBDataReader *_reader;
    GEOLatLng *_center;
    NSString *_localizedText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_center:1;
        unsigned int read_localizedText:1;
        unsigned int wrote_center:1;
        unsigned int wrote_localizedText:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocalizedText;
@property (retain, nonatomic) NSString *localizedText;
@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;

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
- (void)_readCenter;
- (void)_readLocalizedText;

@end
