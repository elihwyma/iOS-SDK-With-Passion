/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableActivityStatisticsQuantityInfo : PBCodable <Swift>

{
    double _endDate;
    double _startDate;
    double _value;
    NSString *_unit;
    CDStruct_2d5b04fb _has;
}

@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic, readonly) _Bool hasUnit;
@property (retain, nonatomic) NSString *unit;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) double value;

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
