/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitWorkoutSessionEvent : PBCodable <Swift>

{
    unsigned long long _timestamp;
    int _activityType;
    int _eventType;
    NSString *_sessionUUID;
    struct {
        unsigned int timestamp:1;
        unsigned int activityType:1;
        unsigned int eventType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasActivityType;
@property (nonatomic) int activityType;
@property (nonatomic) _Bool hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) _Bool hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
- (int)StringAsEventType:(id)arg1;
- (id)activityTypeAsString:(int)arg1;
- (int)StringAsActivityType:(id)arg1;

@end
