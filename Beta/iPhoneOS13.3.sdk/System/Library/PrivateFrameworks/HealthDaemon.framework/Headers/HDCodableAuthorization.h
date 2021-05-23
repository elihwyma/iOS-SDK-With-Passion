/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDCodableAuthorization : PBCodable <Swift>

{
    long long _authorizationMode;
    long long _authorizationRequest;
    long long _authorizationStatus;
    double _modificationDate;
    long long _modificationEpoch;
    long long _objectType;
    struct {
        unsigned int authorizationMode:1;
        unsigned int authorizationRequest:1;
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
        unsigned int modificationEpoch:1;
        unsigned int objectType:1;
    } _has;
}

@property (nonatomic) _Bool hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) _Bool hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) _Bool hasAuthorizationRequest;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) _Bool hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) _Bool hasModificationEpoch;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) _Bool hasAuthorizationMode;
@property (nonatomic) long long authorizationMode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)_modificationDate;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (long long)_authorizationStatus;
- (long long)_dataTypeCode;
- (void)_setModificationDate:(id)arg1;
- (long long)_authorizationRequest;
- (long long)_authorizationMode;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (void)_setAuthorizationModeWithNumber:(id)arg1;

@end
