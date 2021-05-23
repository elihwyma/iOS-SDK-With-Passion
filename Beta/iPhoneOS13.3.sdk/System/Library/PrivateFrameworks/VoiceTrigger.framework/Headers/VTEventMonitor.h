/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface VTEventMonitor : NSObject

{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)notifyObserver:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)enumerateObserversInQueue:(CDUnknownBlockType)arg1;

@end
