/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSString, VTPeerRemoteConnection;

@protocol OS_dispatch_queue;

@interface VTPhraseSpotterControlConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    VTPeerRemoteConnection *_peerConnection;
    _Bool _remotePhraseSpotterEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateRemotePhraseSpotterEnabled:(_Bool)arg1;
- (void)notifyRemoteOfEarlyDetect;
- (void)notifyRemoteOfTriggerEvent;
- (void)notifyRemoteOfDismissal;

@end
