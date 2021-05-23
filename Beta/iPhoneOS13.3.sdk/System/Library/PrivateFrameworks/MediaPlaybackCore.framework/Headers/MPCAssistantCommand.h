/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCAssistantContext, MPCAssistantSendCommand;

@protocol OS_dispatch_queue;

@interface MPCAssistantCommand : NSObject

{
    MPCAssistantSendCommand *_sendCommand;
    MPCAssistantContext *_context;
    NSObject<OS_dispatch_queue> *_sendCommandQueue;
}

- (id)init;
- (void)sendCommand:(unsigned int)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_findOutputDevicesForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
