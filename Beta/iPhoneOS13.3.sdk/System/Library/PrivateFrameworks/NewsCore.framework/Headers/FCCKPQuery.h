/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class NSMutableArray;

@interface FCCKPQuery : PBCodable <Swift>

{
    NSMutableArray *_filters;
    int _queryOperator;
    NSMutableArray *_sorts;
    NSMutableArray *_types;
    _Bool _distinct;
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *sorts;
@property (nonatomic) _Bool hasDistinct;
@property (nonatomic) _Bool distinct;
@property (nonatomic) _Bool hasQueryOperator;
@property (nonatomic) int queryOperator;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)filtersCount;
- (void)clearFilters;
- (unsigned long long)typesCount;
- (void)clearTypes;
- (void)addFilters:(id)arg1;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (void)addTypes:(id)arg1;
- (void)addSorts:(id)arg1;
- (id)typesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortsCount;
- (void)clearSorts;
- (id)sortsAtIndex:(unsigned long long)arg1;

@end
