/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequestFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_requestingAppId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _purpose;
    int _source;
    struct {
        unsigned int has_purpose:1;
        unsigned int has_source:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_requestingAppId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_purpose:1;
        unsigned int wrote_source:1;
    } _flags;
}

@property (nonatomic) _Bool hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (nonatomic, readonly) _Bool hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
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
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3;
- (id)initWithPurpose:(int)arg1;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2;
- (void)_readRequestingAppId;
- (void)_readAppIdentifier;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;
- (id)purposeAsString:(int)arg1;
- (int)StringAsPurpose:(id)arg1;

@end
