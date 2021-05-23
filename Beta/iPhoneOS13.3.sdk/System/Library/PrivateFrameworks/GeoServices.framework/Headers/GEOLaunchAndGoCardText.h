/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, GEOPlaceFormattedString, PBDataReader, PBUnknownFields;

@interface GEOLaunchAndGoCardText : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPlaceFormattedString *_body;
    GEOFormattedString *_cardTitle;
    GEOPlaceFormattedString *_commuteTitle;
    GEOFormattedString *_routeDescription;
    GEOFormattedString *_routeTitle;
    GEOPlaceFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_body:1;
        unsigned int read_cardTitle:1;
        unsigned int read_commuteTitle:1;
        unsigned int read_routeDescription:1;
        unsigned int read_routeTitle:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_body:1;
        unsigned int wrote_cardTitle:1;
        unsigned int wrote_commuteTitle:1;
        unsigned int wrote_routeDescription:1;
        unsigned int wrote_routeTitle:1;
        unsigned int wrote_title:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCardTitle;
@property (retain, nonatomic) GEOFormattedString *cardTitle;
@property (nonatomic, readonly) _Bool hasRouteTitle;
@property (retain, nonatomic) GEOFormattedString *routeTitle;
@property (nonatomic, readonly) _Bool hasRouteDescription;
@property (retain, nonatomic) GEOFormattedString *routeDescription;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *title;
@property (nonatomic, readonly) _Bool hasCommuteTitle;
@property (retain, nonatomic) GEOPlaceFormattedString *commuteTitle;
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
- (void)_readBody;
- (void)_readCardTitle;
- (void)_readRouteTitle;
- (void)_readRouteDescription;
- (void)_readCommuteTitle;

@end
