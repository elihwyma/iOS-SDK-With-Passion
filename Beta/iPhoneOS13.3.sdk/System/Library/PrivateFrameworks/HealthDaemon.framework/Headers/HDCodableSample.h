/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableHealthObject, NSString;

@interface HDCodableSample : PBCodable <Swift>

{
    long long _dataType;
    double _endDate;
    double _startDate;
    HDCodableHealthObject *_object;
    struct {
        unsigned int dataType:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasObject;
@property (retain, nonatomic) HDCodableHealthObject *object;
@property (nonatomic) _Bool hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) double endDate;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;

@end
