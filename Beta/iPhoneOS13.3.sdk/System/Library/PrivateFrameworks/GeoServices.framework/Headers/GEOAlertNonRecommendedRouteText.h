/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, GEOPlaceFormattedString, PBDataReader, PBUnknownFields;

@interface GEOAlertNonRecommendedRouteText : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_responseAlertPrimary;
    GEOFormattedString *_responseAlertSecondary;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_body:1;
        unsigned int read_responseAlertPrimary:1;
        unsigned int read_responseAlertSecondary:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_body:1;
        unsigned int wrote_responseAlertPrimary:1;
        unsigned int wrote_responseAlertSecondary:1;
        unsigned int wrote_title:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasResponseAlertPrimary;
@property (retain, nonatomic) GEOFormattedString *responseAlertPrimary;
@property (nonatomic, readonly) _Bool hasResponseAlertSecondary;
@property (retain, nonatomic) GEOFormattedString *responseAlertSecondary;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *title;
@property (nonatomic, readonly) _Bool hasBody;
@property (retain, nonatomic) GEOPlaceFormattedString *body;
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
- (void)_readTitle;
- (void)_readResponseAlertPrimary;
- (void)_readResponseAlertSecondary;
- (void)_readBody;

@end
