/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSTimer, TIKeyboardApplicationStateMonitor;

@protocol OS_dispatch_source;

@interface TIKeyboardActivityController : NSObject

{
    _Bool _hadRecentActivity;
    _Bool _hasBackgroundActivity;
    unsigned long long _activityState;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    long long _inactiveMemoryPressureCount;
    _Bool _isDirty;
    NSTimer *_inactivityTimer;
    NSHashTable *_observers;
    TIKeyboardApplicationStateMonitor *_appMonitor;
}

@property (nonatomic) _Bool isDirty;
@property (retain, nonatomic) NSTimer *inactivityTimer;
@property (nonatomic, readonly) NSHashTable *observers;
@property (retain, nonatomic) TIKeyboardApplicationStateMonitor *appMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long activityState;

+ (id)sharedController;
+ (void)setSharedController:(id)arg1;
+ (id)singletonInstance;
+ (double)keyboardIdleTimeoutInterval;
+ (double)defaultKeyboardIdleTimeoutInterval;
+ (void)setKeyboardIdleTimeoutInterval:(double)arg1;

- (id)init;
- (void)dealloc;
- (void)releaseInputManagers;
- (void)addActivityObserver:(id)arg1;
- (void)removeActivityObserver:(id)arg1;
- (void)keyboardAssertionsDidChange;
- (void)backgroundActivityAssertionsDidChange;
- (void)notifyTransitionWithContext:(id)arg1;
- (void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (id)createMemoryPressureSource;
- (void)handleMemoryStatusPressure:(unsigned long long)arg1;
- (unsigned long long)getExcessMemoryInBytes;
- (void)updateActivityState;
- (_Bool)atexitHandler;
- (void)touchInactivityTimer;
- (void)inactivityTimerFired:(id)arg1;
- (void)setKeyboardDirtyIfNecessary;
- (_Bool)shouldBecomeDirty;
- (void)setKeyboardCleanIfNecessary;
- (_Bool)canGoEarlyClean;
- (_Bool)shouldBecomeClean;

@end
