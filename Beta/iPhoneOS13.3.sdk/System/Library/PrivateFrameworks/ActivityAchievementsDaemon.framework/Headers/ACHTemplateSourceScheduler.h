/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementStore, ACHTemplateStore, HDProfile, NSCalendar, NSDate, NSDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface ACHTemplateSourceScheduler : NSObject

{
    int _significantTimeChangeToken;
    _Bool _initialRunComplete;
    _Bool _achievementStoreDidFinishInitialFetch;
    _Bool _shouldScheduleAfterInitialFetch;
    HDProfile *_profile;
    ACHTemplateStore *_templateStore;
    ACHAchievementStore *_achievementStore;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSSet *_templateSources;
    NSDictionary *_lastRunDateByTemplateSourceIdentifier;
    NSCalendar *_gregorianCalendar;
    NSDate *_currentDateOverride;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHAchievementStore *achievementStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) _Bool initialRunComplete;
@property (retain, nonatomic) NSSet *templateSources;
@property (retain, nonatomic) NSDictionary *lastRunDateByTemplateSourceIdentifier;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (nonatomic) _Bool achievementStoreDidFinishInitialFetch;
@property (nonatomic) _Bool shouldScheduleAfterInitialFetch;
@property (nonatomic, readonly) unsigned long long _sourceCount;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_currentDate;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)registerTemplateSource:(id)arg1;
- (void)deregisterTemplateSource:(id)arg1;
- (void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
- (void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;
- (void)achievementStoreDidFinishInitialFetch:(id)arg1;
- (_Bool)_runSynchronouslyWithError:(id *)arg1;
- (_Bool)_queue_runTemplateSources:(id)arg1 requiringRunnableForDate:(_Bool)arg2 error:(id *)arg3;
- (void)_runAllTemplateSources;
- (id)_runnableSourcesInSources:(id)arg1 forDate:(id)arg2 calendar:(id)arg3;
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2 achievementStore:(id)arg3;
- (void)runImmediatelyForTemplateSource:(id)arg1;

@end
