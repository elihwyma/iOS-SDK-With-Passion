/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSData, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdateAlert : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_content;
    NSData *_identifier;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_content:1;
        unsigned int read_identifier:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_content:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_title:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (nonatomic, readonly) _Bool hasContent;
@property (retain, nonatomic) GEOFormattedString *content;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
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
- (void)_readIdentifier;
- (void)_readContent;

@end
