/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class HKHealthStore, HKObserverQuery, HKSampleQuery, HKWorkout, NSArray, NSObject, _HKFirstPartyWorkoutSnapshot;

@protocol OS_dispatch_queue;

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource

{
    NSObject<OS_dispatch_queue> *_healthQueue;
    int _lockStateNotifyToken;
    _Bool _deviceIsLocked;
    int _workoutStateNotifyToken;
    NSArray *_animationImages;
    _Bool _loadingLastWorkout;
    _Bool _hasKnownLastWorkoutState;
    HKWorkout *_lastWorkout;
    _HKFirstPartyWorkoutSnapshot *_activeWorkoutSnapshot;
    HKHealthStore *_healthStore;
    HKSampleQuery *_lastWorkoutQuery;
    HKObserverQuery *_workoutObservationQuery;
}

@property (nonatomic, getter=isLoadingLastWorkout) _Bool loadingLastWorkout;
@property (retain, nonatomic) HKWorkout *lastWorkout;
@property (nonatomic) _Bool hasKnownLastWorkoutState;
@property (retain, nonatomic) _HKFirstPartyWorkoutSnapshot *activeWorkoutSnapshot;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSampleQuery *lastWorkoutQuery;
@property (retain, nonatomic) HKObserverQuery *workoutObservationQuery;

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_templateForWorkout:(id)arg1 family:(long long)arg2;
+ (id)_unknownTemplateForFamily:(long long)arg1;
+ (id)_workoutTintColor;
+ (id)_signatureTemplateWithHasActiveWorkout:(_Bool)arg1 hasPausedActiveWorkout:(_Bool)arg2;

- (void)dealloc;
- (void)_invalidate;
- (void)resume;
- (id)_animationImages;
- (void)_startObserving;
- (void)resumeAnimations;
- (_Bool)_hasActiveWorkout;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)currentSwitcherTemplate;
- (id)lockedTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (void)_handleDeviceLockChange;
- (void)_updateActiveWorkoutState;
- (void)_stopLastWorkoutQuerySynchronously:(_Bool)arg1;
- (void)_stopObservingSynchronously:(_Bool)arg1;
- (id)_templateForActiveWorkoutInSwitcher:(_Bool)arg1;
- (id)_noWorkoutsTemplate;
- (void)_startLastWorkoutQueryIfPossible;
- (_Bool)_hasPausedActiveWorkout;
- (id)_makeAnimatedImageProvider;
- (id)_makeObservationQuery;
- (id)_makeLastWorkoutQuery;

@end
