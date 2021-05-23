/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener, RadioAvailabilityController, RadioRecentStationsController;

@protocol OS_dispatch_queue;

@interface MPRemoteRadioController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_connections;
    _Bool _hasRefreshedStations;
    NSXPCListener *_listener;
    RadioAvailabilityController *_availabilityController;
    RadioRecentStationsController *_recentStationsController;
}

@property (nonatomic, readonly) RadioAvailabilityController *availabilityController;
@property (nonatomic, readonly) RadioRecentStationsController *recentStationsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)_removeConnection:(id)arg1;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)arg1;
- (void)_playActivityReportingControllerDidFlushEventsNotification:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)_handleRecentStationsControllerDidChange;

@end
