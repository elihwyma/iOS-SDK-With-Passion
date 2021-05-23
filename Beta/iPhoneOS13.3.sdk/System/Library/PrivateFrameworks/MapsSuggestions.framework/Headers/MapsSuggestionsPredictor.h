/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MapsSuggestionsSignalPackCache, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsPredictor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsSignalPackCache *_signalPackCache;
    int _tempPredictedTransportMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)sharedPredictor;

- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (void)_unscheduleCloseConnection;
- (_Bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_initCloseTimerIfNecessary;
- (_Bool)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)storeSignalPack:(id)arg1 forMapItem:(struct GEOMapItemStorage *)arg2;
- (_Bool)predictedTransportModeForDestinationMapItem:(struct GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(struct GEOMapItemStorage *)arg2 destinationMapItem:(struct GEOMapItemStorage *)arg3;
- (void)capturePredictedTransportationMode:(int)arg1;
- (void)cancelCapturingAnalytics;

@end
