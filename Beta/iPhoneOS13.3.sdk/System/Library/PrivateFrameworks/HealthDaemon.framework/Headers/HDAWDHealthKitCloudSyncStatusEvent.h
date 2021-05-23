/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncStatusEvent : PBCodable <Swift>

{
    unsigned long long _baselineEpoch;
    unsigned long long _emptyZoneCount;
    unsigned long long _timeSinceDownloadSuccess;
    unsigned long long _timeSinceLastUploadForwardProgress;
    unsigned long long _timeSinceUploadSuccess;
    unsigned long long _timeUntilRebaseRequired;
    unsigned long long _timestamp;
    HDAWDHealthKitCloudSyncEvent *_event;
    _Bool _hasEncounteredGapInCurrentEpoch;
    struct {
        unsigned int baselineEpoch:1;
        unsigned int emptyZoneCount:1;
        unsigned int timeSinceDownloadSuccess:1;
        unsigned int timeSinceLastUploadForwardProgress:1;
        unsigned int timeSinceUploadSuccess:1;
        unsigned int timeUntilRebaseRequired:1;
        unsigned int timestamp:1;
        unsigned int hasEncounteredGapInCurrentEpoch:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event;
@property (nonatomic) _Bool hasTimeSinceUploadSuccess;
@property (nonatomic) unsigned long long timeSinceUploadSuccess;
@property (nonatomic) _Bool hasTimeSinceDownloadSuccess;
@property (nonatomic) unsigned long long timeSinceDownloadSuccess;
@property (nonatomic) _Bool hasTimeUntilRebaseRequired;
@property (nonatomic) unsigned long long timeUntilRebaseRequired;
@property (nonatomic) _Bool hasTimeSinceLastUploadForwardProgress;
@property (nonatomic) unsigned long long timeSinceLastUploadForwardProgress;
@property (nonatomic) _Bool hasBaselineEpoch;
@property (nonatomic) unsigned long long baselineEpoch;
@property (nonatomic) _Bool hasHasEncounteredGapInCurrentEpoch;
@property (nonatomic) _Bool hasEncounteredGapInCurrentEpoch;
@property (nonatomic) _Bool hasEmptyZoneCount;
@property (nonatomic) unsigned long long emptyZoneCount;

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
