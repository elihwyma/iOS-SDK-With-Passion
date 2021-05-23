/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItem : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_photo;
    NSString *_primaryText;
    NSString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _photoItemType;
    struct {
        unsigned int has_photoItemType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_photo:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_photo:1;
        unsigned int wrote_primaryText:1;
        unsigned int wrote_secondaryText:1;
        unsigned int wrote_photoItemType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPhoto;
@property (retain, nonatomic) GEOPDPhoto *photo;
@property (nonatomic, readonly) _Bool hasPrimaryText;
@property (retain, nonatomic) NSString *primaryText;
@property (nonatomic, readonly) _Bool hasSecondaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (nonatomic) _Bool hasPhotoItemType;
@property (nonatomic) int photoItemType;
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
- (void)_readPhoto;
- (void)_readPrimaryText;
- (void)_readSecondaryText;
- (id)photoItemTypeAsString:(int)arg1;
- (int)StringAsPhotoItemType:(id)arg1;

@end
