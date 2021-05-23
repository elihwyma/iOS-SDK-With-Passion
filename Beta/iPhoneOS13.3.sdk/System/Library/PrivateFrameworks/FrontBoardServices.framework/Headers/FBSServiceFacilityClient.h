/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, BSServiceInterface, BSServiceQuality, NSString;

@protocol OS_dispatch_queue;

@interface FBSServiceFacilityClient : NSObject

{
    BSServiceConnectionEndpoint *_endpoint;
    NSString *_facilityID;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _configOnly_interfaceTarget;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _configured;
    struct os_unfair_lock_s _lock;
    BSServiceConnection *_lock_connection;
    _Bool _lock_connectionDenied;
    _Bool _lock_activated;
    _Bool _lock_invalidated;
    _Bool _uisHack;
}

@property (nonatomic, readonly, getter=isConfigured) _Bool configured;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BSServiceQuality *serviceQuality;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultShellEndpoint;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)handleError:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)_lock_invalidate;
- (void)activate;
- (_Bool)_isValid;
- (id)initWithConfigurator:(CDUnknownBlockType)arg1;
- (void)setServiceQuality:(id)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4 timeout:(double)arg5;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)configureConnectMessage:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (void)_queue_handleError:(id)arg1;
- (void)_lock_activate;

@end
