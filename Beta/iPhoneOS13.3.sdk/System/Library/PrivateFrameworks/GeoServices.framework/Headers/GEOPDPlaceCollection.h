/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDCaptionedPhoto, GEOPDMapsIdentifier, GEOPDTextBlock, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollection : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDMapsIdentifier *_collectionId;
    GEOPDCaptionedPhoto *_photo;
    GEOPDTextBlock *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _placeCount;
    struct {
        unsigned int has_placeCount:1;
        unsigned int read_unknownFields:1;
        unsigned int read_collectionId:1;
        unsigned int read_photo:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_collectionId:1;
        unsigned int wrote_photo:1;
        unsigned int wrote_title:1;
        unsigned int wrote_placeCount:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) GEOPDTextBlock *title;
@property (nonatomic, readonly) _Bool hasPhoto;
@property (retain, nonatomic) GEOPDCaptionedPhoto *photo;
@property (nonatomic, readonly) _Bool hasCollectionId;
@property (retain, nonatomic) GEOPDMapsIdentifier *collectionId;
@property (nonatomic) _Bool hasPlaceCount;
@property (nonatomic) unsigned int placeCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)collectionComponentsForPlaceData:(id)arg1;

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
- (void)_readTitle;
- (void)_readPhoto;
- (void)_readCollectionId;

@end
