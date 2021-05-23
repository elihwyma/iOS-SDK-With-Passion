/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPSearchCommonContext : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_lastSearchString;
    NSString *_lastUserTypedSearchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_lastSearchString:1;
        unsigned int read_lastUserTypedSearchString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_lastSearchString:1;
        unsigned int wrote_lastUserTypedSearchString:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLastSearchString;
@property (retain, nonatomic) NSString *lastSearchString;
@property (nonatomic, readonly) _Bool hasLastUserTypedSearchString;
@property (retain, nonatomic) NSString *lastUserTypedSearchString;
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
- (void)_readLastSearchString;
- (void)_readLastUserTypedSearchString;

@end
