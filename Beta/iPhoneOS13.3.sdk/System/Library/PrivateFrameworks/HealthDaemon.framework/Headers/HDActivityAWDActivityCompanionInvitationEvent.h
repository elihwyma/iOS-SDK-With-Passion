/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <Swift>

{
    unsigned long long _timestamp;
    int _action;
    int _failureReason;
    int _stage;
    _Bool _retryExpected;
    _Bool _success;
    struct {
        unsigned int timestamp:1;
        unsigned int action:1;
        unsigned int failureReason:1;
        unsigned int stage:1;
        unsigned int retryExpected:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasFailureReason;
@property (nonatomic) int failureReason;
@property (nonatomic) _Bool hasStage;
@property (nonatomic) int stage;
@property (nonatomic) _Bool hasAction;
@property (nonatomic) int action;
@property (nonatomic) _Bool hasRetryExpected;
@property (nonatomic) _Bool retryExpected;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)failureReasonAsString:(int)arg1;
- (int)StringAsFailureReason:(id)arg1;
- (id)actionAsString:(int)arg1;
- (int)StringAsAction:(id)arg1;
- (id)stageAsString:(int)arg1;
- (int)StringAsStage:(id)arg1;

@end
