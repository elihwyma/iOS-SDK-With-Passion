/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class NSData, NSUUID;

@interface HDHeartbeatSequenceSensorDatum : HDDataCollectorSensorDatum

{
    NSData *_heartbeatSequenceData;
    long long _context;
    double _longestSubsequenceStart;
    double _longestSubsequenceDuration;
    NSUUID *_heartRateVariabilityUUID;
}

@property (nonatomic, readonly) NSData *heartbeatSequenceData;
@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) double longestSubsequenceStart;
@property (nonatomic, readonly) double longestSubsequenceDuration;
@property (nonatomic, readonly) NSUUID *heartRateVariabilityUUID;

+ (_Bool)supportsSecureCoding;
+ (id)_dataFromHeartbeatArray:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 heartRateVariabilityUUID:(id)arg7 resumeContext:(id)arg8;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 medianHeartRate:(id)arg7 heartRateVariabilityUUID:(id)arg8 resumeContext:(id)arg9;

@end
