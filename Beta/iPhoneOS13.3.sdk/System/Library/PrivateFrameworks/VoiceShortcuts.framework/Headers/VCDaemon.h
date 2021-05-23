/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class VCCKNotificationCenter, VCCoreDuetListener, VCDaemonDatabaseProvider, VCDaemonSyncDataEndpoint, VCDaemonXPCEventHandler, VCShareSheetWorkflowStatusUpdater, VCSpotlightSyncService, VCWatchSyncCoordinator, VCXPCServer;

@interface VCDaemon : NSObject

{
    VCXPCServer *_xpcServer;
    VCDaemonDatabaseProvider *_databaseProvider;
    VCDaemonXPCEventHandler *_xpcEventHandler;
    VCDaemonSyncDataEndpoint *_syncDataEndpoint;
    VCCoreDuetListener *_coreDuetListener;
    VCWatchSyncCoordinator *_watchSyncCoordinator;
    VCSpotlightSyncService *_spotlightLibrarySyncService;
    VCCKNotificationCenter *_cloudKitNotificationCenter;
    VCShareSheetWorkflowStatusUpdater *_shareSheetStatusUpdater;
}

@property (nonatomic, readonly) VCXPCServer *xpcServer;
@property (nonatomic, readonly) VCDaemonDatabaseProvider *databaseProvider;
@property (nonatomic, readonly) VCDaemonXPCEventHandler *xpcEventHandler;
@property (nonatomic, readonly) VCDaemonSyncDataEndpoint *syncDataEndpoint;
@property (nonatomic, readonly) VCCoreDuetListener *coreDuetListener;
@property (nonatomic, readonly) VCWatchSyncCoordinator *watchSyncCoordinator;
@property (nonatomic, readonly) VCSpotlightSyncService *spotlightLibrarySyncService;
@property (retain, nonatomic) VCCKNotificationCenter *cloudKitNotificationCenter;
@property (retain, nonatomic) VCShareSheetWorkflowStatusUpdater *shareSheetStatusUpdater;

+ (id)sharedDaemon;

- (id)init;
- (void)start;
- (void)startEventObservation;
- (void)applicationWasUnregistered:(id)arg1;
- (void)assistantPreferencesDidChange;

@end
