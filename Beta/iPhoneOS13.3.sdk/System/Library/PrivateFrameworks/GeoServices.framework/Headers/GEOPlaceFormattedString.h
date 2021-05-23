/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, PBDataReader, PBUnknownFields;

@interface GEOPlaceFormattedString : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_contactHome;
    GEOFormattedString *_contactOther;
    GEOFormattedString *_contactWork;
    GEOFormattedString *_custom;
    GEOFormattedString *_home;
    GEOFormattedString *_pointOfInterest;
    GEOFormattedString *_streetAddress;
    GEOFormattedString *_unknown;
    GEOFormattedString *_work;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_contactHome:1;
        unsigned int read_contactOther:1;
        unsigned int read_contactWork:1;
        unsigned int read_custom:1;
        unsigned int read_home:1;
        unsigned int read_pointOfInterest:1;
        unsigned int read_streetAddress:1;
        unsigned int read_unknown:1;
        unsigned int read_work:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_contactHome:1;
        unsigned int wrote_contactOther:1;
        unsigned int wrote_contactWork:1;
        unsigned int wrote_custom:1;
        unsigned int wrote_home:1;
        unsigned int wrote_pointOfInterest:1;
        unsigned int wrote_streetAddress:1;
        unsigned int wrote_unknown:1;
        unsigned int wrote_work:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasHome;
@property (retain, nonatomic) GEOFormattedString *home;
@property (nonatomic, readonly) _Bool hasWork;
@property (retain, nonatomic) GEOFormattedString *work;
@property (nonatomic, readonly) _Bool hasContactWork;
@property (retain, nonatomic) GEOFormattedString *contactWork;
@property (nonatomic, readonly) _Bool hasContactHome;
@property (retain, nonatomic) GEOFormattedString *contactHome;
@property (nonatomic, readonly) _Bool hasContactOther;
@property (retain, nonatomic) GEOFormattedString *contactOther;
@property (nonatomic, readonly) _Bool hasPointOfInterest;
@property (retain, nonatomic) GEOFormattedString *pointOfInterest;
@property (nonatomic, readonly) _Bool hasStreetAddress;
@property (retain, nonatomic) GEOFormattedString *streetAddress;
@property (nonatomic, readonly) _Bool hasUnknown;
@property (retain, nonatomic) GEOFormattedString *unknown;
@property (nonatomic, readonly) _Bool hasCustom;
@property (retain, nonatomic) GEOFormattedString *custom;
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
- (void)_readHome;
- (void)_readWork;
- (void)_readContactWork;
- (void)_readContactHome;
- (void)_readContactOther;
- (void)_readPointOfInterest;
- (void)_readStreetAddress;
- (void)_readUnknown;
- (void)_readCustom;

@end
