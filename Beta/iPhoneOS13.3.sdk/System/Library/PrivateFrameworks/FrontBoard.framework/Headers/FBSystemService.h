/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, FBSSerialQueue, FBServiceFacilityServer, NSString;

@protocol FBSApplicationInfoProvider, FBSystemServiceDelegate;

@interface FBSystemService : NSObject

{
    FBSSerialQueue *_queue;
    BSServiceConnectionListener *_legacyOpenServiceListener;
    int _pendingExit;
    id <FBSApplicationInfoProvider> _lock_defaultInfoProvider;
    struct os_unfair_lock_s _defaultInfoProviderLock;
    id <FBSystemServiceDelegate> _delegate;
    FBServiceFacilityServer *_server;
}

@property (retain, nonatomic) FBServiceFacilityServer *server;
@property (nonatomic, readonly) id <FBSApplicationInfoProvider> _applicationInfoProvider;
@property (nonatomic, readonly) FBSSerialQueue *queue;
@property (readonly, getter=isPendingExit) _Bool pendingExit;
@property (weak, nonatomic) id <FBSystemServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)canOpenApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)openApplication:(id)arg1 withOptions:(id)arg2 originator:(id)arg3 requestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg1;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)shutdownWithOptions:(id)arg1 origin:(id)arg2;
- (void)_setInfoProvider;
- (void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2;
- (void)setPendingExit:(_Bool)arg1;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)arg1;
- (void)_performExitTasksForRelaunch:(_Bool)arg1;
- (void)exitAndRelaunch:(_Bool)arg1 withOptions:(unsigned long long)arg2;
- (void)_terminateProcesses:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_activateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (_Bool)_isTrustedRequest:(id)arg1 forCaller:(id)arg2 fromClient:(id)arg3 forApplication:(id)arg4 withOptions:(id)arg5 fatalError:(out id *)arg6;
- (void)_reallyActivateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(_Bool)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(CDUnknownBlockType)arg11;
- (_Bool)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)activateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)prepareDisplaysForExit;
- (_Bool)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (void)shutdownAndReboot:(_Bool)arg1;
- (void)shutdownUsingOptions:(id)arg1;
- (void)exitAndRelaunch:(_Bool)arg1;
- (void)prepareForExitAndRelaunch:(_Bool)arg1;
- (void)setSystemIdleSleepDisabled:(_Bool)arg1 forReason:(id)arg2;

@end
