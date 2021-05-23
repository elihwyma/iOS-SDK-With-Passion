/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPSourceInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sourceApplication;
    NSString *_sourceUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_sourceApplication:1;
        unsigned int read_sourceUrl:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sourceApplication:1;
        unsigned int wrote_sourceUrl:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSourceApplication;
@property (retain, nonatomic) NSString *sourceApplication;
@property (nonatomic, readonly) _Bool hasSourceUrl;
@property (retain, nonatomic) NSString *sourceUrl;
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
- (void)_readSourceApplication;
- (void)_readSourceUrl;

@end
