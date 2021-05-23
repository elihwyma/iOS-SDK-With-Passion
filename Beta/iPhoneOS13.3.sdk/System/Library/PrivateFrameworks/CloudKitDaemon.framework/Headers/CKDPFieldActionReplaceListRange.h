/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPFieldActionReplaceListRange : PBCodable

{
    CKDPListRange *_range;
    NSMutableArray *_values;
}

@property (nonatomic, readonly) _Bool hasRange;
@property (retain, nonatomic) CKDPListRange *range;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addValue:(id)arg1;
- (unsigned long long)valuesCount;
- (void)clearValues;

@end
