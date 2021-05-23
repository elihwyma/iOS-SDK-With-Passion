/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemonTransaction, HKWorkoutRoute, NSArray;

@interface HDSmoothingTask : NSObject

{
    HKWorkoutRoute *_sample;
    NSArray *_unsmoothedLocations;
    CDUnknownBlockType _completionHandler;
    HDDaemonTransaction *_transaction;
    unsigned long long _smoothingAttempts;
}

@property (retain, nonatomic) HKWorkoutRoute *sample;
@property (retain, nonatomic) NSArray *unsmoothedLocations;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) HDDaemonTransaction *transaction;
@property unsigned long long smoothingAttempts;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithRoute:(id)arg1;

@end
