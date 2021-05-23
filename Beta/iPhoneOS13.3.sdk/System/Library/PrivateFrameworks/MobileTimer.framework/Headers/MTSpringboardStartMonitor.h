/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTObserverStore;

@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject

{
    int _notifyToken;
    _Bool _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_stopMonitoring;
- (_Bool)_checkSpringBoardStarted;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)didReceiveSpringboardStarted:(_Bool)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (_Bool)isSpringboardStarted;

@end
