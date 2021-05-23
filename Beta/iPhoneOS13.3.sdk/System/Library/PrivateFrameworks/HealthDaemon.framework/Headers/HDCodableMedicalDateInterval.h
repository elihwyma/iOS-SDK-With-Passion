/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <Swift>

{
    HDCodableMedicalDate *_endDate;
    HDCodableMedicalDate *_startDate;
}

@property (nonatomic, readonly) _Bool hasStartDate;
@property (retain, nonatomic) HDCodableMedicalDate *startDate;
@property (nonatomic, readonly) _Bool hasEndDate;
@property (retain, nonatomic) HDCodableMedicalDate *endDate;

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
