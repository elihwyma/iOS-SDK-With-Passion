/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableWorkoutConfiguration, NSString;

@interface HDCodableStartWorkoutAppRequest : PBRequest <Swift>

{
    NSString *_applicationIdentifier;
    NSString *_requestIdentifier;
    HDCodableWorkoutConfiguration *_workoutConfiguration;
}

@property (nonatomic, readonly) _Bool hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic, readonly) _Bool hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, readonly) _Bool hasWorkoutConfiguration;
@property (retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration;

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
