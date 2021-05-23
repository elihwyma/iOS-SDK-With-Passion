/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class PETEventTracker2;

@protocol OS_dispatch_queue;

@interface TRILogger : NSObject

{
    int _projectId;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    PETEventTracker2 *_eventTracker;
}

- (id)init;
- (void)logEvent:(id)arg1;
- (id)initWithProjectId:(int)arg1;
- (void)_dispatchLogEvent:(id)arg1;
- (void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3;
- (id)messageWithOneofField:(id)arg1 withName:(id)arg2;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(char *)arg4;
- (void)logWithTrackingId:(id)arg1 message:(id)arg2;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2;

@end
