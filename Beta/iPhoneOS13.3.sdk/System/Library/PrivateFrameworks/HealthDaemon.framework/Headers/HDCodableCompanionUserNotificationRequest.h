/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableCompanionUserNotificationConfiguration, NSString;

@interface HDCodableCompanionUserNotificationRequest : PBRequest <Swift>

{
    HDCodableCompanionUserNotificationConfiguration *_notificationConfiguration;
    NSString *_requestIdentifier;
}

@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic, readonly) _Bool hasNotificationConfiguration;
@property (retain, nonatomic) HDCodableCompanionUserNotificationConfiguration *notificationConfiguration;

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
