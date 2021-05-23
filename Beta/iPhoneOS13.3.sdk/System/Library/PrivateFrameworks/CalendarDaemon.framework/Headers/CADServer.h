/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class CDBDataProtectionObserver, NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject

{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    _Bool _active;
    CDBDataProtectionObserver *_dataProtectionObserver;
    NSArray *_modules;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_alarmQueue;
}

@property (retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver;
@property (retain, nonatomic) NSArray *modules;
@property (nonatomic, getter=isActive) _Bool active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_stringForBackgroundTaskAgentJobStatus:(int)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)activate;
- (void)deactivate;
- (void)_registerForNotifications;
- (void)clientConnectionDied:(id)arg1;
- (id)initWithModules:(id)arg1;
- (void)_enableICloudBackups;
- (void)_setUpSignalHandlers;
- (void)_protectedDataDidBecomeAvailable;
- (void)_finishInitializationWithDataAvailable;
- (void)_handleXPCConnection:(id)arg1;
- (void)_registerMaintenanceActivities;
- (void)_tearDownSignalHandlers;
- (void)_registerForAlarmEvents;
- (void)_registerForBackgroundTaskAgentJobs;
- (void)_startBirthdayManager;
- (void)_deactivateAndExitWithStatus:(int)arg1;
- (void)_dumpState;
- (void)_updateOccurrenceCacheTimeZone;
- (_Bool)_trimAndExtendOccurrenceCache;
- (void)_registerForDatabaseCleanup;
- (void)_registerForAnalyticsCollection;
- (void)_registerForAttachmentCleanup;
- (void)_registerForChangeTableCleanup;
- (void)cleanupDatabase:(struct CalDatabase *)arg1;
- (void)_registerActivityWithIdentifier:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase *)arg1;
- (void)_exitWithStatus:(int)arg1;
- (void)_handleDatabaseChanged;

@end
