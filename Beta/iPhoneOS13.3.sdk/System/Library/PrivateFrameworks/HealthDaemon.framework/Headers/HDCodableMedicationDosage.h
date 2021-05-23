/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalDateInterval, NSString;

@interface HDCodableMedicationDosage : PBCodable <Swift>

{
    NSString *_instruction;
    HDCodableMedicalDateInterval *_timingPeriod;
}

@property (nonatomic, readonly) _Bool hasInstruction;
@property (retain, nonatomic) NSString *instruction;
@property (nonatomic, readonly) _Bool hasTimingPeriod;
@property (retain, nonatomic) HDCodableMedicalDateInterval *timingPeriod;

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
