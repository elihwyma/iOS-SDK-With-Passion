/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTObserverStore, MTTimer, MTTimerMigrator, MTTimerScheduler, NSArray, NSDate, NSMutableArray, NSString;

@protocol MTPersistence, NAScheduler;

@interface MTTimerStorage : NSObject

{
    MTTimerScheduler *_scheduler;
    NSMutableArray *_orderedTimers;
    NSDate *_lastModifiedDate;
    CDUnknownBlockType _currentDateProvider;
    MTTimerMigrator *_migrator;
    id <NAScheduler> _serializer;
    MTObserverStore *_observers;
    id <MTPersistence> _persistence;
}

@property (retain, nonatomic) NSMutableArray *orderedTimers;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic, readonly) CDUnknownBlockType currentDateProvider;
@property (retain, nonatomic) MTTimerMigrator *migrator;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) id <MTPersistence> persistence;
@property (weak, nonatomic) MTTimerScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *timers;
@property (nonatomic, readonly) MTTimer *nextTimer;

+ (id)_diagnosticDictionaryForTimer:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithPersistence:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 serializer:(id)arg3 callbackScheduler:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;
- (void)_loadTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(_Bool)arg3 notify:(_Bool)arg4;
- (void)_queue_addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2;
- (void)_queue_persistTimers;
- (void)_queue_sortTimers;
- (void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2;
- (void)_createDefaultTimerIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (_Bool)_queue_hasMatchingTimer:(id)arg1;
- (id)_queue_timerMatchingTimerIdentifier:(id)arg1;
- (id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2;
- (void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2;
- (id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2;
- (void)_queue_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_diagnosticTimerDictionary;
- (void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2;
- (void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2;
- (void)scheduler:(id)arg1 didFireTimer:(id)arg2;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)getTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 source:(id)arg3;
- (void)setAllTimers:(id)arg1 source:(id)arg2;
- (void)loadTimers;
- (void)loadTimersSync;
- (void)_queue_removeAllTimersForSource:(id)arg1;
- (void)handleF5Reset;
- (void)handleMigrationFinish;

@end
