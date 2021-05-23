/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCAssistantDiscovery;

@interface MPCAssistantContext : NSObject

{
    MPCAssistantDiscovery *_discovery;
}

- (id)init;
- (void)modifySystemMusicContextForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
