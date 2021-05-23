/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class AVOutputContext, BSAtomicSignal, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSNotificationCenter, NSString;

@protocol OS_dispatch_queue, SBAVSystemControllerDataProviding;

@interface SBAVSystemControllerCache : NSObject

{
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _dataProviderInitializer;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    AVOutputContext *_queue_outputContext;
    id <SBAVSystemControllerDataProviding> _queue_dataProvider;
    NSMutableDictionary *_notificationToHandlerMap;
    NSMutableDictionary *_notificationToBackgroundQueryCancellationSignalMap;
    _Bool _queue_initialized;
    BSAtomicSignal *_queue_serverDeathSignal;
    _Bool _queue_fullyMuted;
    float _queue_volumeLimit;
    _Bool _queue_volumeLimitEnforced;
    int _queue_recordingPID;
    NSString *_queue_activeAudioRoute;
    NSDictionary *_queue_activeAudioRouteInfo;
    NSArray *_queue_pickableRoutes;
    NSArray *_queue_activeOutputDevices;
    _Bool _outputContextSupportsMultipleOutputDevices;
    _Bool _queue_airplayDisplayActive;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
}

@property (nonatomic, readonly, getter=isFullyMuted) _Bool fullyMuted;
@property (nonatomic, readonly) float volumeLimit;
@property (nonatomic, readonly, getter=isVolumeLimitEnforced) _Bool volumeLimitEnforced;
@property (nonatomic, readonly) int recordingPID;
@property (copy, nonatomic, readonly) NSString *activeAudioRoute;
@property (copy, nonatomic, readonly) NSDictionary *activeAudioRouteInfo;
@property (copy, nonatomic, readonly) NSArray *pickableRoutes;
@property (copy, nonatomic, readonly) NSArray *activeOutputDevices;
@property (nonatomic, readonly, getter=isAirplayDisplayActive) _Bool airplayDisplayActive;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)_queue_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_updateFullyMutedFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateVolumeLimitFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateVolumeLimitEnforcedFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateRecordingPIDFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateActiveOutputDevicesFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateActiveAudioRouteFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updatePickableRoutesFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_updateAirplayDisplayActiveFromNotification:(id)arg1 allowingBackgroundQueries:(_Bool)arg2 backgroundQueriesCancelledBlock:(CDUnknownBlockType)arg3 cancelBackgroundQueriesBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_serverDied:(id)arg1;
- (void)_receiveUpdatedValueFromNotification:(id)arg1;
- (void)_queue_rebuildCache;
- (id)initWithCallOutQueue:(id)arg1 notificationCenter:(id)arg2 dataProviderInitializer:(CDUnknownBlockType)arg3;
- (id)_queryActiveOutputDevicesFromContext:(id)arg1;
- (id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)arg1;
- (void)_queue_signalBackgroundQueryCancellationForNotification:(id)arg1;
- (void)fetchPickableRoutesWithCompletion:(CDUnknownBlockType)arg1;

@end
