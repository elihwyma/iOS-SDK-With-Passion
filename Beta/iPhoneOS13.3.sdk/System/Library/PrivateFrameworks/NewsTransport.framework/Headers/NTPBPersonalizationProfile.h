/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable

{
    NSMutableArray *_aggregates;
    NSMutableArray *_histories;
}

@property (retain, nonatomic) NSMutableArray *aggregates;
@property (retain, nonatomic) NSMutableArray *histories;

+ (Class)aggregatesType;
+ (Class)historiesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addAggregates:(id)arg1;
- (void)addHistories:(id)arg1;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (id)aggregatesAtIndex:(unsigned long long)arg1;
- (void)clearHistories;
- (unsigned long long)historiesCount;
- (id)historiesAtIndex:(unsigned long long)arg1;

@end
