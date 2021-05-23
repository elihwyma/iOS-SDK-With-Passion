/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
    NSMutableArray *_zeroKeywordEntrys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_zeroKeywordEntrys:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_zeroKeywordEntrys:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *categorys;
@property (retain, nonatomic) NSMutableArray *zeroKeywordEntrys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)categoryType;
+ (_Bool)isValid:(id)arg1;
+ (Class)zeroKeywordEntryType;

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
- (void)_readCategorys;
- (void)_addNoFlagsCategory:(id)arg1;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(id)arg1;
- (void)_readZeroKeywordEntrys;
- (void)_addNoFlagsZeroKeywordEntry:(id)arg1;
- (unsigned long long)zeroKeywordEntrysCount;
- (void)clearZeroKeywordEntrys;
- (id)zeroKeywordEntryAtIndex:(unsigned long long)arg1;
- (void)addZeroKeywordEntry:(id)arg1;

@end
