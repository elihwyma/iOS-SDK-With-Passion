/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_os_log;

@interface _DASSubmissionRateLimiter : NSObject

{
    int _dastoolToken;
    NSMutableDictionary *_penaltyBox;
    NSObject<OS_dispatch_queue> *_delayedSubmissionQueue;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_activityGroupQueue;
    NSMutableDictionary *_submittedActivities;
    NSMutableDictionary *_activityGroups;
}

@property (retain, nonatomic) NSMutableDictionary *penaltyBox;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delayedSubmissionQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *activityGroupQueue;
@property (retain, nonatomic) NSMutableDictionary *submittedActivities;
@property (retain, nonatomic) NSMutableDictionary *activityGroups;
@property (nonatomic) int dastoolToken;

+ (id)groupNameForActivity:(id)arg1;
+ (id)pluginGroupNameForGroupName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)handleCanceledActivity:(id)arg1 withGroupName:(id)arg2;
- (void)removeFromPenaltyBox:(id)arg1;
- (void)addToPenaltyBox:(id)arg1 atDate:(id)arg2;
- (unsigned long long)capacityForGroupName:(id)arg1;
- (_Bool)shouldQueueActivity:(id)arg1;
- (void)updateCapacity:(unsigned long long)arg1 forGroupName:(id)arg2;
- (_Bool)shouldDelaySubmissionOfActivity:(id)arg1;
- (_Bool)shouldDelayGroupSubmissionOfActivity:(id)arg1;
- (void)handleCanceledActivity:(id)arg1;
- (void)admitNextActivityAfterCompletionOf:(id)arg1 withScheduler:(id)arg2;
- (void)createActivityGroup:(id)arg1;
- (void)submitActivity:(id)arg1 withScheduler:(id)arg2;
- (void)submitActivities:(id)arg1 withScheduler:(id)arg2;
- (void)submitActivity:(id)arg1 inGroup:(id)arg2 withScheduler:(id)arg3;
- (void)activityCanceled:(id)arg1 withScheduler:(id)arg2;
- (void)activityCompleted:(id)arg1 withScheduler:(id)arg2;

@end
