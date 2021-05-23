/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader;

@interface GEOAnalyticsPipelineEvalStatus : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_inflightTypeCounts;
    NSMutableArray *_shadowTypeCounts;
    NSMutableArray *_storedTypeCounts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _evalModeEnabled;
    struct {
        unsigned int has_evalModeEnabled:1;
        unsigned int read_inflightTypeCounts:1;
        unsigned int read_shadowTypeCounts:1;
        unsigned int read_storedTypeCounts:1;
        unsigned int wrote_inflightTypeCounts:1;
        unsigned int wrote_shadowTypeCounts:1;
        unsigned int wrote_storedTypeCounts:1;
        unsigned int wrote_evalModeEnabled:1;
    } _flags;
}

@property (nonatomic) _Bool hasEvalModeEnabled;
@property (nonatomic) _Bool evalModeEnabled;
@property (retain, nonatomic) NSMutableArray *storedTypeCounts;
@property (retain, nonatomic) NSMutableArray *inflightTypeCounts;
@property (retain, nonatomic) NSMutableArray *shadowTypeCounts;

+ (_Bool)isValid:(id)arg1;
+ (Class)storedTypeCountsType;
+ (Class)inflightTypeCountsType;
+ (Class)shadowTypeCountsType;

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
- (void)_readStoredTypeCounts;
- (void)_addNoFlagsStoredTypeCounts:(id)arg1;
- (void)_readInflightTypeCounts;
- (void)_addNoFlagsInflightTypeCounts:(id)arg1;
- (void)_readShadowTypeCounts;
- (void)_addNoFlagsShadowTypeCounts:(id)arg1;
- (unsigned long long)storedTypeCountsCount;
- (void)clearStoredTypeCounts;
- (id)storedTypeCountsAtIndex:(unsigned long long)arg1;
- (void)addStoredTypeCounts:(id)arg1;
- (unsigned long long)inflightTypeCountsCount;
- (void)clearInflightTypeCounts;
- (id)inflightTypeCountsAtIndex:(unsigned long long)arg1;
- (void)addInflightTypeCounts:(id)arg1;
- (unsigned long long)shadowTypeCountsCount;
- (void)clearShadowTypeCounts;
- (id)shadowTypeCountsAtIndex:(unsigned long long)arg1;
- (void)addShadowTypeCounts:(id)arg1;

@end
