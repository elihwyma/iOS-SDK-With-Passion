/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocationInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_localityName;
    NSString *_locationName;
    NSString *_secondaryLocationName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_localityName:1;
        unsigned int read_locationName:1;
        unsigned int read_secondaryLocationName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_localityName:1;
        unsigned int wrote_locationName:1;
        unsigned int wrote_secondaryLocationName:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocationName;
@property (retain, nonatomic) NSString *locationName;
@property (nonatomic, readonly) _Bool hasSecondaryLocationName;
@property (retain, nonatomic) NSString *secondaryLocationName;
@property (nonatomic, readonly) _Bool hasLocalityName;
@property (retain, nonatomic) NSString *localityName;
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
- (void)_readLocationName;
- (void)_readSecondaryLocationName;
- (void)_readLocalityName;

@end
