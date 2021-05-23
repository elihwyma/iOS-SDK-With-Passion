/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSString, VTPeerRemoteConnection;

@protocol OS_dispatch_queue, VTPhraseSpotterControlRemoteDelegate;

@interface VTPhraseSpotterControlRemote : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    VTPeerRemoteConnection *_peerConnection;
    id <VTPhraseSpotterControlRemoteDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
