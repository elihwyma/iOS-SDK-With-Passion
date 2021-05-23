/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOShortTrafficSummary : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_detail:1;
        unsigned int read_titles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_detail:1;
        unsigned int wrote_titles:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *titles;
@property (nonatomic, readonly) _Bool hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)titleType;
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
- (void)_readTitles;
- (void)_addNoFlagsTitle:(id)arg1;
- (unsigned long long)titlesCount;
- (void)clearTitles;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)addTitle:(id)arg1;

@end
