/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSiriSearchResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_resultDetourInfos;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isChainResultSet;
    struct {
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_disambiguationLabels:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_disambiguationLabels:1;
        unsigned int wrote_resultDetourInfos:1;
        unsigned int wrote_isChainResultSet:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *disambiguationLabels;
@property (retain, nonatomic) NSMutableArray *resultDetourInfos;
@property (nonatomic) _Bool hasIsChainResultSet;
@property (nonatomic) _Bool isChainResultSet;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)disambiguationLabelType;
+ (Class)resultDetourInfoType;

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
- (void)_readDisambiguationLabels;
- (void)_addNoFlagsDisambiguationLabel:(id)arg1;
- (void)_readResultDetourInfos;
- (void)_addNoFlagsResultDetourInfo:(id)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)clearDisambiguationLabels;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)clearResultDetourInfos;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (void)addResultDetourInfo:(id)arg1;

@end
