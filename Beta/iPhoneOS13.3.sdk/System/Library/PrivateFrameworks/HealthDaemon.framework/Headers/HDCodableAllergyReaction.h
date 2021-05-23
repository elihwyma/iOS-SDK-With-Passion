/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalDate, NSMutableArray;

@interface HDCodableAllergyReaction : PBCodable <Swift>

{
    NSMutableArray *_manifestationCodings;
    HDCodableMedicalDate *_onsetDate;
    HDCodableMedicalCoding *_severityCoding;
}

@property (retain, nonatomic) NSMutableArray *manifestationCodings;
@property (nonatomic, readonly) _Bool hasSeverityCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *severityCoding;
@property (nonatomic, readonly) _Bool hasOnsetDate;
@property (retain, nonatomic) HDCodableMedicalDate *onsetDate;

+ (Class)manifestationCodingsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addManifestationCodings:(id)arg1;
- (unsigned long long)manifestationCodingsCount;
- (void)clearManifestationCodings;
- (id)manifestationCodingsAtIndex:(unsigned long long)arg1;

@end
