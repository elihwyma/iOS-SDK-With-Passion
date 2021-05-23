/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableError, NSString;

@interface HDCodableCompanionUserNotificationResponse : PBCodable <Swift>

{
    HDCodableError *_error;
    NSString *_requestIdentifier;
    _Bool _success;
    CDStruct_f2ecb737 _has;
}

@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) HDCodableError *error;

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
