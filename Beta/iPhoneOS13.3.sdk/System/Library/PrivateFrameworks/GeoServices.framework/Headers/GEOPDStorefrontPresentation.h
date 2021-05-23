/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDStorefrontView, NSString, PBDataReader;

@interface GEOPDStorefrontPresentation : PBCodable

{
    PBDataReader *_reader;
    GEOPDStorefrontView *_closeUpView;
    NSString *_overlayImageUrl;
    GEOPDStorefrontView *_standOffView;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_closeUpView:1;
        unsigned int read_overlayImageUrl:1;
        unsigned int read_standOffView:1;
        unsigned int wrote_closeUpView:1;
        unsigned int wrote_overlayImageUrl:1;
        unsigned int wrote_standOffView:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCloseUpView;
@property (retain, nonatomic) GEOPDStorefrontView *closeUpView;
@property (nonatomic, readonly) _Bool hasStandOffView;
@property (retain, nonatomic) GEOPDStorefrontView *standOffView;
@property (nonatomic, readonly) _Bool hasOverlayImageUrl;
@property (retain, nonatomic) NSString *overlayImageUrl;

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
- (void)_readCloseUpView;
- (void)_readStandOffView;
- (void)_readOverlayImageUrl;

@end
