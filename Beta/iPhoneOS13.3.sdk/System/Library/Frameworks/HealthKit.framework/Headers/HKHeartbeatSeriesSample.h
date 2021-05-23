/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSeriesSample.h>

@class NSData, NSNumber, NSString;

@interface HKHeartbeatSeriesSample : HKSeriesSample

{
    NSData *_heartbeatData;
    long long _numberOfDataPoints;
    NSNumber *_cachedMinBeatsPerMinute;
    NSNumber *_cachedMaxBeatsPerMinute;
}

@property (readonly) NSNumber *_minimumBeatsPerMinute;
@property (readonly) NSNumber *_maximumBeatsPerMinute;
@property (readonly) long long numberOfDataPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_heartbeatSeriesSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5;
+ (id)_heartbeatSeriesSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id *)arg4;
+ (id)heartbeatSequenceSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
+ (id)heartBeatSequenceSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id *)arg4;

- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (_Bool)_shouldNotifyOnInsert;
- (void)_enumerateHeartbeatDataWithBlock:(CDUnknownBlockType)arg1;
- (void)_setPayload:(id)arg1;
- (void)_computeMinimumAndMaximumBeatsPerMinute;
- (void)enumerateHeartbeatDataWithBlock:(CDUnknownBlockType)arg1;

@end
