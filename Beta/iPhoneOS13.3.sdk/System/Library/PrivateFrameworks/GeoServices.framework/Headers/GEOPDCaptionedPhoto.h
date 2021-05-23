/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCaptionedPhoto : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_author;
    NSString *_caption;
    NSString *_licenseDescription;
    NSString *_licenseUrl;
    GEOPDPhoto *_photo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _displayFullPhotoInline;
    _Bool _highQuality;
    _Bool _isBusinessOwned;
    _Bool _useGallery;
    struct {
        unsigned int has_displayFullPhotoInline:1;
        unsigned int has_highQuality:1;
        unsigned int has_isBusinessOwned:1;
        unsigned int has_useGallery:1;
        unsigned int read_unknownFields:1;
        unsigned int read_author:1;
        unsigned int read_caption:1;
        unsigned int read_licenseDescription:1;
        unsigned int read_licenseUrl:1;
        unsigned int read_photo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_author:1;
        unsigned int wrote_caption:1;
        unsigned int wrote_licenseDescription:1;
        unsigned int wrote_licenseUrl:1;
        unsigned int wrote_photo:1;
        unsigned int wrote_displayFullPhotoInline:1;
        unsigned int wrote_highQuality:1;
        unsigned int wrote_isBusinessOwned:1;
        unsigned int wrote_useGallery:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCaption;
@property (retain, nonatomic) NSString *caption;
@property (nonatomic, readonly) _Bool hasAuthor;
@property (retain, nonatomic) NSString *author;
@property (nonatomic, readonly) _Bool hasLicenseDescription;
@property (retain, nonatomic) NSString *licenseDescription;
@property (nonatomic, readonly) _Bool hasLicenseUrl;
@property (retain, nonatomic) NSString *licenseUrl;
@property (nonatomic, readonly) _Bool hasPhoto;
@property (retain, nonatomic) GEOPDPhoto *photo;
@property (nonatomic) _Bool hasDisplayFullPhotoInline;
@property (nonatomic) _Bool displayFullPhotoInline;
@property (nonatomic) _Bool hasUseGallery;
@property (nonatomic) _Bool useGallery;
@property (nonatomic) _Bool hasHighQuality;
@property (nonatomic) _Bool highQuality;
@property (nonatomic) _Bool hasIsBusinessOwned;
@property (nonatomic) _Bool isBusinessOwned;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)captionedPhotosForPlaceData:(id)arg1;

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
- (void)_readCaption;
- (void)_readAuthor;
- (void)_readLicenseDescription;
- (void)_readLicenseUrl;

@end
