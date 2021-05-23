/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncStartEvent : PBCodable <Swift>

{
    unsigned long long _countSinceLastSuccess;
    unsigned long long _timeSinceLastSuccess;
    unsigned long long _timestamp;
    HDAWDHealthKitCloudSyncEvent *_event;
    struct {
        unsigned int countSinceLastSuccess:1;
        unsigned int timeSinceLastSuccess:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event;
@property (nonatomic) _Bool hasCountSinceLastSuccess;
@property (nonatomic) unsigned long long countSinceLastSuccess;
@property (nonatomic) _Bool hasTimeSinceLastSuccess;
@property (nonatomic) unsigned long long timeSinceLastSuccess;

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
