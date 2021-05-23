/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSDictionary, NSError, NSUUID;

@interface _HKWorkoutEvent : NSObject

{
    NSUUID *_sessionId;
    long long _eventType;
    NSDateInterval *_dateInterval;
    NSError *_error;
    NSDictionary *_metadata;
}

@property (copy, nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) long long eventType;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) long long workoutEventType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
- (id)initWithSessionId:(id)arg1 error:(id)arg2;
- (id)initWithEventType:(long long)arg1 sessionId:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4;

@end
