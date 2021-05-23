/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitArtwork, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitSystem : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSString *_website;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _systemIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_systemIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_artwork:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_website:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_artwork:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_website:1;
        unsigned int wrote_systemIndex:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasSystemIndex;
@property (nonatomic) unsigned int systemIndex;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasWebsite;
@property (retain, nonatomic) NSString *website;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) _Bool hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)identifier;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readStyleAttributes;
- (void)_readArtwork;
- (void)_readNameDisplayString;
- (id)bestName;
- (id)geoTransitSystem;
- (void)_readWebsite;

@end
