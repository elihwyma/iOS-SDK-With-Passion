/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAddress, GEOPlaceActionDetails, PBDataReader;

@interface GEOMapsSearchResult : PBCodable

{
    PBDataReader *_reader;
    GEOAddress *_address;
    unsigned long long _muid;
    GEOPlaceActionDetails *_placeActionDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_muid:1;
        unsigned int read_address:1;
        unsigned int read_placeActionDetails:1;
        unsigned int wrote_address:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_placeActionDetails:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEOAddress *address;
@property (nonatomic, readonly) _Bool hasPlaceActionDetails;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;

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
- (void)_readAddress;
- (void)_readPlaceActionDetails;

@end
