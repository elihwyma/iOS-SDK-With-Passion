/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDActionOperationEngine, FPDAppMonitor, FPDCacheDeleteService, FPDExtensionManager, FPDPresenterManager, NSString, NSXPCListener;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface FPDServer : NSObject

{
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_machSrc;
    NSObject<OS_dispatch_queue> *_makeSureSetupEnqueued;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_afterSetupWorkQueue;
    NSObject<OS_dispatch_group> *_fileProviderManagerIsReadyGroup;
    NSObject<OS_dispatch_queue> *_machServerQueue;
    int _providerChangeNotificationToken;
    FPDCacheDeleteService *_cacheDelete;
    _Bool _isUnlocked;
    _Bool _isPastBuddy;
    FPDActionOperationEngine *_operationEngine;
    FPDAppMonitor *_appMonitor;
    FPDExtensionManager *_extensionManager;
    FPDPresenterManager *_presenterManager;
    Class _fpfsClass;
    Class _fpfsSQLBackupManagerClass;
    Class _fpfsSQLRestoreManagerClass;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSXPCListener *listener;
@property (nonatomic, readonly) FPDActionOperationEngine *operationEngine;
@property (nonatomic, readonly) FPDCacheDeleteService *cacheDelete;
@property (nonatomic, readonly) FPDAppMonitor *appMonitor;
@property (nonatomic, readonly) FPDExtensionManager *extensionManager;
@property (nonatomic, readonly) FPDPresenterManager *presenterManager;
@property (retain, nonatomic) Class fpfsClass;
@property (retain, nonatomic) Class fpfsSQLBackupManagerClass;
@property (retain, nonatomic) Class fpfsSQLRestoreManagerClass;

+ (id)homeDirectory;
+ (id)cloudStoragePath;
+ (id)appSupportPath;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)_setup;
- (void)localeDidChange;
- (void)signalProviderChanges;
- (void)_initSignals;
- (void)handleExitSignal:(int)arg1;
- (void)exitWithCode:(int)arg1;
- (void)providersDidChange;
- (void)_finishSetup;
- (void)_startXPCListener;
- (void)_computeUnlockedStatus;
- (void)materializeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
