/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitZoomRangeString : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _minZoom;
    struct {
        unsigned int has_minZoom:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelLanguage:1;
        unsigned int read_labelText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_labelLanguage:1;
        unsigned int wrote_labelText:1;
        unsigned int wrote_minZoom:1;
    } _flags;
}

@property (nonatomic) _Bool hasMinZoom;
@property (nonatomic) unsigned int minZoom;
@property (nonatomic, readonly) _Bool hasLabelLanguage;
@property (retain, nonatomic) NSString *labelLanguage;
@property (nonatomic, readonly) _Bool hasLabelText;
@property (retain, nonatomic) NSString *labelText;
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
- (void)_readLabelLanguage;
- (void)_readLabelText;

@end
