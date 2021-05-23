/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCoding, NSString;

@interface HDCodableCodedQuantity : PBCodable <Swift>

{
    HDCodableMedicalCoding *_comparatorCoding;
    NSString *_rawValue;
    HDCodableMedicalCoding *_unitCoding;
}

@property (nonatomic, readonly) _Bool hasRawValue;
@property (retain, nonatomic) NSString *rawValue;
@property (nonatomic, readonly) _Bool hasComparatorCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *comparatorCoding;
@property (nonatomic, readonly) _Bool hasUnitCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *unitCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
