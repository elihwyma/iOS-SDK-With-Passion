/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface CDMonitorManager : NSObject

{
    NSMutableDictionary *_monitors;
    NSMutableSet *_lazyMonitorNames;
    CDUnknownBlockType _generalInstantHandler;
    CDUnknownBlockType _generalHistoricalHandler;
    CDUnknownBlockType _generalHistoricalDeletingHandler;
    CDUnknownBlockType _generalShutdownHandler;
    NSMutableDictionary *_instantHandlerMap;
    NSMutableDictionary *_historicalHandlerMap;
    NSMutableSet *_shutdownHandlingMonitors;
    NSObject<OS_dispatch_queue> *_monitorWorkQueue;
}

+ (id)monitorManagerForEventStreams:(id)arg1 domain:(unsigned long long)arg2;

- (void)stop;
- (void)start;
- (id)lastUpdate;
- (void)loadMonitorManagers;
- (void)setInstantHandler:(CDUnknownBlockType)arg1;
- (id)currentEvent;
- (void)update;
- (void)setHistoricalHandler:(CDUnknownBlockType)arg1;
- (void)setShutdownHandler:(CDUnknownBlockType)arg1;
- (void)setHistoricalDeletingHandler:(CDUnknownBlockType)arg1;
- (id)initWithEventStreams:(id)arg1 domain:(unsigned long long)arg2;
- (void)_setInstantHandler:(CDUnknownBlockType)arg1 forStreamName:(id)arg2;
- (void)_setHistoricalHandler:(CDUnknownBlockType)arg1 forStreamName:(id)arg2;
- (id)_monitorForStreamName:(id)arg1;
- (void)_startMonitorForStreamName:(id)arg1;
- (id)_allStreamNames;
- (void)_stopMonitorForStreamName:(id)arg1;
- (id)_currentEventForStreamName:(id)arg1;
- (void)_updateForStreamName:(id)arg1;
- (id)_lastUpdateForStreamName:(id)arg1;
- (id)_allMonitors;
- (void)_addMonitor:(id)arg1 forStreamName:(id)arg2;
- (void)_removeMonitorForStreamName:(id)arg1;
- (_Bool)_hasMonitorForStreamName:(id)arg1;
- (void)setInstantHandler:(CDUnknownBlockType)arg1 forStream:(id)arg2;
- (void)setHistoricalHandler:(CDUnknownBlockType)arg1 forStream:(id)arg2;
- (void)startMonitorForStream:(id)arg1;
- (void)stopMonitorForStream:(id)arg1;
- (void)populateCurrentValueForStreamName:(id)arg1;
- (id)currentEventForStream:(id)arg1;
- (void)updateForStream:(id)arg1;
- (id)lastUpdateForStream:(id)arg1;
- (void)deliverNotificationEvent:(id)arg1;
- (void)handleShutdownNotification;
- (void)addMonitor:(id)arg1;
- (void)removeMonitor:(id)arg1;
- (_Bool)hasMonitor:(id)arg1;

@end
