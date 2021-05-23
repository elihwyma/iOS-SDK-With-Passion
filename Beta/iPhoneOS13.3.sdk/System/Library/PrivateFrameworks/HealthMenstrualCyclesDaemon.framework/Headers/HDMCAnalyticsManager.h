/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class HDMCAnalysisManager, HDPeriodicActivity, HDProfile, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMCAnalyticsManager : NSObject

{
    HDMCAnalysisManager *_analysisManager;
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)_retryInterval;
- (void)daemonReady:(id)arg1;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2;
- (double)_submissionInterval;
- (void)_queue_performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_submitAnalyticsWithActivityCompletion:(CDUnknownBlockType)arg1;

@end
