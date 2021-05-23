/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse, NSString;

@interface HDCodableRoutineResponseMessage : PBCodable <Swift>

{
    NSString *_errorDescription;
    HDCodableRoutineLocationResponse *_fetchLocationResponse;
    HDCodableRoutinePredictedLocationsResponse *_fetchNextLocationResponse;
    NSString *_requestIdentifier;
    int _requestType;
    CDStruct_7c66fec0 _has;
}

@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic, readonly) _Bool hasFetchLocationResponse;
@property (retain, nonatomic) HDCodableRoutineLocationResponse *fetchLocationResponse;
@property (nonatomic, readonly) _Bool hasFetchNextLocationResponse;
@property (retain, nonatomic) HDCodableRoutinePredictedLocationsResponse *fetchNextLocationResponse;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
