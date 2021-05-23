/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <ReplayKit/RPBroadcastHandler.h>

@class NSString;

@protocol RPBroadcastDaemonProtocol;

@interface RPBroadcastSampleHandler : RPBroadcastHandler

{
    id <RPBroadcastDaemonProtocol> _daemonProxy;
}

@property (retain, nonatomic) id <RPBroadcastDaemonProtocol> daemonProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)group;
- (id)videoQueue;
- (id)audioQueue;
- (void)updateServiceInfo:(id)arg1;
- (void)updateBroadcastURL:(id)arg1;
- (void)finishBroadcastWithError:(id)arg1;
- (void)_setupListenerWithEndpoint:(id)arg1;
- (void)_processPayloadWithVideoSample:(id)arg1;
- (void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2;
- (void)broadcastAnnotatedWithApplicationInfo:(id)arg1;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastFinished;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)_processPayload:(id)arg1;
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extensionContext:(id)arg1 setEndpoint:(id)arg2;

@end
