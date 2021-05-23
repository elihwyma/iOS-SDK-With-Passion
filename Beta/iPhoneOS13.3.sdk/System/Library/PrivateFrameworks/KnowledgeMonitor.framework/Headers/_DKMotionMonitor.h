/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class CMMotionActivityManager, NSObject, NSOperationQueue;

@protocol OS_dispatch_source;

@interface _DKMotionMonitor : _DKMonitor

{
    _Bool _monitoringActivity;
    _Bool _shouldRecordMotion;
    _Bool _activateTimer;
    long long _lastReportedMotionState;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_motionStateProcessingTimer;
    unsigned long long _currentDominantMotionState;
    double _dominantActivityInterval;
}

@property (nonatomic) _Bool monitoringActivity;
@property (nonatomic) _Bool shouldRecordMotion;
@property (nonatomic) long long lastReportedMotionState;
@property (retain, nonatomic) CMMotionActivityManager *activityManager;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *motionStateProcessingTimer;
@property (nonatomic, readonly) unsigned long long currentDominantMotionState;
@property (nonatomic, readonly) double dominantActivityInterval;
@property (nonatomic, readonly) _Bool activateTimer;

+ (id)entitlements;
+ (id)eventStream;
+ (unsigned long long)_activityTypeToMotionState:(id)arg1;
+ (id)_eventWithState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)update;
- (void)deactivate;
- (void)addState:(id)arg1;
- (id)initForUnitTest:(_Bool)arg1;
- (void)computeDominantMotionState;
- (void)addMotionActivity:(id)arg1;
- (id)classesForSecureStateDecoding;

@end
