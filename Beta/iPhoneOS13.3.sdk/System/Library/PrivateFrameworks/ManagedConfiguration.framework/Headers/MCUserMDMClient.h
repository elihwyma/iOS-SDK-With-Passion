/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MCUserMDMClient : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processUserRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_destroyXPCConnectionAndInvalidate:(_Bool)arg1;
- (_Bool)supportsPerUserMDM;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (id)pushToken;
- (id)processUserRequest:(id)arg1 outError:(id *)arg2;

@end
