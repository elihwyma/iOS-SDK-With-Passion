/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSMutableArray;

@interface HKCodableQuantitySeries : PBCodable <Swift>

{
    NSMutableArray *_values;
}

@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valuesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(id)arg1;

@end
