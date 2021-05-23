/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitUserCharacteristics : PBCodable <Swift>

{
    long long _ageYears;
    long long _biologicalSex;
    long long _heightCm;
    long long _weightKg;
    struct {
        unsigned int ageYears:1;
        unsigned int biologicalSex:1;
        unsigned int heightCm:1;
        unsigned int weightKg:1;
    } _has;
}

@property (nonatomic) _Bool hasWeightKg;
@property (nonatomic) long long weightKg;
@property (nonatomic) _Bool hasHeightCm;
@property (nonatomic) long long heightCm;
@property (nonatomic) _Bool hasBiologicalSex;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) _Bool hasAgeYears;
@property (nonatomic) long long ageYears;

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
