/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOMiniCard : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _shouldEmphasize;
    struct {
        unsigned int has_shouldEmphasize:1;
        unsigned int read_unknownFields:1;
        unsigned int read_buttonText:1;
        unsigned int read_detail:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buttonText:1;
        unsigned int wrote_detail:1;
        unsigned int wrote_title:1;
        unsigned int wrote_shouldEmphasize:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (nonatomic, readonly) _Bool hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (nonatomic, readonly) _Bool hasButtonText;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) _Bool hasShouldEmphasize;
@property (nonatomic) _Bool shouldEmphasize;
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
- (void)_readDetail;
- (void)_readTitle;
- (void)_readButtonText;

@end
