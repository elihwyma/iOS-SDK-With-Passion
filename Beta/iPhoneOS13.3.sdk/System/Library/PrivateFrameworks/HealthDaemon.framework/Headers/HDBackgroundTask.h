/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary;

@protocol OS_xpc_object;

@interface HDBackgroundTask : NSObject

{
    NSObject<OS_xpc_object> *_job;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDictionary *userContext;
@property (nonatomic) _Bool shiftsDatesWithSystemClockChanges;
@property (nonatomic) _Bool allowsPowerOptimizedScheduling;

- (id)init;
- (id)description;
- (id)_job;
- (id)_initWithJob:(id)arg1;
- (_Bool)taskValid;
- (_Bool)taskSatisfied;
- (_Bool)taskExpired;

@end
