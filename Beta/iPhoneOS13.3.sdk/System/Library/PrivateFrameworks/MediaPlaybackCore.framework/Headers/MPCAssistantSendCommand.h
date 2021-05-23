/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCAssistantConnection, MPCAssistantDiscovery;

@interface MPCAssistantSendCommand : NSObject

{
    MPCAssistantConnection *_connection;
    MPCAssistantDiscovery *_discovery;
}

- (id)init;
- (void)_sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpoint:(void *)arg3 toDestination:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_formGroupAndSendCommand:(unsigned int)arg1 withOptions:(id)arg2 toExternalDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendCommand:(unsigned int)arg1 path:(void *)arg2 options:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_isAnyDeviceControllable:(id)arg1;
- (void *)_findEndpointFromEndpoints:(id)arg1 byGroupLeader:(id)arg2;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toLocalDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpointDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
