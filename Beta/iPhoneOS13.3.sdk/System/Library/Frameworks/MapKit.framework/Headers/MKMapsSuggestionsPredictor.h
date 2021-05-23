/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol MKMapsSuggestionsSignalPackCacheInterface, OS_dispatch_queue, OS_dispatch_source;

@interface MKMapsSuggestionsPredictor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    id <MKMapsSuggestionsSignalPackCacheInterface> _signalPackCacheInterface;
}

@property (retain, nonatomic) id <MKMapsSuggestionsSignalPackCacheInterface> signalPackCacheInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPredictor;

- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (_Bool)transportModeForDestinationMapItemData:(id)arg1 originCoordinateData:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_unscheduleCloseConnection;
- (_Bool)_openConnectionIfNecessary;
- (id)NSDataToMKMapsSuggestionsTransportModes:(id)arg1 error:(id *)arg2;
- (void)_scheduleCloseConnection;
- (void)_initCloseTimerIfNecessary;
- (_Bool)transportModeForDestinationEntryData:(id)arg1 originCoordinateData:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
