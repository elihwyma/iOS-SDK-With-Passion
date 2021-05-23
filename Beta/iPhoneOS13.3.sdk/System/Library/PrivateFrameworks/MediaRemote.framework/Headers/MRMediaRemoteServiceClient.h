/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRAVRoutingClientController, MRBlockGuard, MRMediaRemoteService, MRNotificationClient, MRNotificationServiceClient, NSArray, NSMutableArray, NSMutableSet, _MRNowPlayingPlayerPathProtobuf;

@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    _MRNowPlayingPlayerPathProtobuf *_activePlayerPath;
    int _notifyRestoreClientStateForLaunch;
    NSMutableSet *_playerPathInvalidationHandlers;
    MRNotificationServiceClient *_notificationService;
    _Bool _xpcConnectionIsActive;
    MRBlockGuard *_xpcConnectionIgnoreNextInvalidationTimer;
    MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
}

@property (nonatomic, readonly) MRMediaRemoteService *service;
@property (nonatomic, readonly) MRNotificationClient *notificationClient;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;

+ (id)sharedServiceClient;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)_initializeConnection;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)_registerCallbacks;
- (void)_invalidateConnectionWithTimer:(_Bool)arg1;
- (void)_resumeConnection;
- (void)processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)_onQueue_setActivePlayerPath:(id)arg1;
- (void)_onQueue_processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)_callInvalidationHandler:(id)arg1;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterOrigin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isOriginRegistered:(id)arg1;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)removeInvalidationHandler:(id)arg1;
- (void)_processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;

@end
