/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableInspectableValue, HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableCodedValue : PBCodable <Swift>

{
    HDCodableMedicalCodingList *_codings;
    NSMutableArray *_referenceRanges;
    HDCodableInspectableValue *_value;
}

@property (nonatomic, readonly) _Bool hasCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *codings;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) HDCodableInspectableValue *value;
@property (retain, nonatomic) NSMutableArray *referenceRanges;

+ (Class)referenceRangesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addReferenceRanges:(id)arg1;
- (unsigned long long)referenceRangesCount;
- (void)clearReferenceRanges;
- (id)referenceRangesAtIndex:(unsigned long long)arg1;

@end
