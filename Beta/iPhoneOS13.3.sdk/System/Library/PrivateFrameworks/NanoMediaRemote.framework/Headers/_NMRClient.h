/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NMRClient : NSObject

{
    NSXPCConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
}

+ (id)sharedClient;

- (id)init;
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)refreshMediaRemoteStateIfNecessary;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withCommandOptions:(id)arg2 toOriginWithUniqueIdentifier:(int)arg3 commandResultHandler:(CDUnknownBlockType)arg4;
- (void)prewarmCompanionSystemMusicApp;
- (void)fetchCompanionCloudAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)discoverAndConnectEndpoints;

@end
