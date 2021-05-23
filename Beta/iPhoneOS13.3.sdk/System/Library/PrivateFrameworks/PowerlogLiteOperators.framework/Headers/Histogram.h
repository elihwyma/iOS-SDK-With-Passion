/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface Histogram : PBCodable

{
    NSMutableArray *_bins;
    unsigned int _index;
    struct {
        unsigned int index:1;
    } _has;
}

@property (nonatomic) _Bool hasIndex;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSMutableArray *bins;

+ (Class)binType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addBin:(id)arg1;
- (unsigned long long)binsCount;
- (void)clearBins;
- (id)binAtIndex:(unsigned long long)arg1;

@end
