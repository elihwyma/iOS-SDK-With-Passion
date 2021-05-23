/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSString, PBDataReader, PBUnknownFields;

@interface GEOCollectionPlace : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_address;
    GEOLatLng *_coordinate;
    unsigned long long _muid;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _providerId;
    struct {
        unsigned int has_muid:1;
        unsigned int has_providerId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_coordinate:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_name:1;
        unsigned int wrote_providerId:1;
    } _flags;
}

@property (nonatomic) _Bool hasProviderId;
@property (nonatomic) int providerId;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) NSString *address;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
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
- (void)_readName;
- (void)_readAddress;
- (void)_readCoordinate;

@end
