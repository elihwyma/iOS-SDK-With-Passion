/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class CMMotionActivityManager, NSOperationQueue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MotionStateRelay : NSObject

{
    NSObject<OS_dispatch_queue> *_alarmQueue;
    unsigned int _currentMotion;
    _Bool _isStationary;
    _Bool _isMoving;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_alarmOperationQueue;
}

@property (nonatomic, readonly) unsigned int currentMotion;
@property (nonatomic, readonly) _Bool isStationary;

+ (id)sharedInstance;
+ (_Bool)automaticallyNotifiesObserversOfCurrentMotion;
+ (_Bool)automaticallyNotifiesObserversOfIsStationary;

- (id)init;
- (void)dealloc;
- (void)transitionToState:(unsigned int)arg1;
- (_Bool)isMoving;
- (void)stopActivityUpdates;
- (void)unsubscribe;
- (void)subscribe;
- (void)initializeEngine;
- (void)destroyEngine;
- (void)stopMotionMonitoring;
- (void)startMotionMonitoring;
- (void)startActivityUpdates;
- (id)motionStateString:(unsigned int)arg1;

@end
