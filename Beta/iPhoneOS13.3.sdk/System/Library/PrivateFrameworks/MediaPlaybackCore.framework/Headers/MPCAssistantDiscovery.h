/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@interface MPCAssistantDiscovery : NSObject

{
    void *_reconSession;
}

- (void)dealloc;
- (void)stopDiscovery;
- (void)_discoverAirplayDevices:(CDUnknownBlockType)arg1;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
