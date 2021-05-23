/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, ACHTemplateStore, ACHWorkoutUtility, HDProfile, NSDate, NSString;

@interface ACHWorkoutAwardingSource : NSObject

{
    unsigned char _creatorDevice;
    HDProfile *_profile;
    ACHEarnedInstanceAwardingEngine *_engine;
    ACHAchievementProgressEngine *_progressProvider;
    ACHTemplateStore *_templateStore;
    ACHWorkoutUtility *_workoutUtility;
    NSDate *_currentDateOverride;
    NSString *_watchCountryCodeOverride;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (nonatomic) unsigned char creatorDevice;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (retain, nonatomic) NSString *watchCountryCodeOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)currentDate;
- (void)daemonReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (_Bool)providesProgressForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)_earnedInstancesForWorkouts:(id)arg1;
- (_Bool)_handlesTemplate:(id)arg1;
- (id)_progressEnvironment;
- (id)watchCountryCode;
- (id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 creatorDevice:(unsigned char)arg4 progressProvider:(id)arg5 workoutUtility:(id)arg6;

@end
