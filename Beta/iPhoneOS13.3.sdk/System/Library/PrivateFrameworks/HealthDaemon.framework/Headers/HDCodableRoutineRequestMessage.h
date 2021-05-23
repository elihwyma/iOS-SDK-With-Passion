/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableRoutineLocationRequest, HDCodableRoutineScenarioTriggeredRequest, NSString;

@interface HDCodableRoutineRequestMessage : PBCodable <Swift>

{
    HDCodableRoutineLocationRequest *_fetchLocationRequest;
    NSString *_requestIdentifier;
    int _requestType;
    HDCodableRoutineScenarioTriggeredRequest *_scenarioTriggeredRequest;
    CDStruct_7c66fec0 _has;
}

@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic, readonly) _Bool hasFetchLocationRequest;
@property (retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest;
@property (nonatomic, readonly) _Bool hasScenarioTriggeredRequest;
@property (retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (int)StringAsRequestType:(id)arg1;

@end
