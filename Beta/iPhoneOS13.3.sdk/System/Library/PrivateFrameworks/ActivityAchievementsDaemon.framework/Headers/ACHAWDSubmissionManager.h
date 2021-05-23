/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHEarnedInstanceStore, HDPeriodicActivity, HDProfile, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ACHAWDSubmissionManager : NSObject

{
    HDProfile *_profile;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    HDPeriodicActivity *_scheduler;
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) HDPeriodicActivity *scheduler;
@property (retain, nonatomic) NSMutableDictionary *serverConnectionsByComponentId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_computeAndSubmitAchievementCountMetric;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (_Bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1 earnedInstanceStore:(id)arg2;

@end
