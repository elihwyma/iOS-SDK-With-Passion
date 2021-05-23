/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable

{
    NSMutableArray *_failures;
    NSMutableArray *_successes;
}

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)successesType;
+ (Class)failuresType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addSuccesses:(id)arg1;
- (void)addFailures:(id)arg1;
- (void)clearSuccesses;
- (unsigned long long)successesCount;
- (id)successesAtIndex:(unsigned long long)arg1;
- (void)clearFailures;
- (unsigned long long)failuresCount;
- (id)failuresAtIndex:(unsigned long long)arg1;

@end
