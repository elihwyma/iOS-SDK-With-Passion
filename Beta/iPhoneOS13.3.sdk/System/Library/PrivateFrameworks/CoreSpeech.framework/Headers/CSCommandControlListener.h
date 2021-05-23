/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioStream, CSXPCClient, NSString;

@protocol CSAudioStreamProviding, CSCommandControlListenerDelegate, OS_dispatch_queue;

@interface CSCommandControlListener : NSObject

{
    id <CSCommandControlListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSAudioStreamProviding> _audioStreamProvider;
    CSAudioStream *_audioStream;
    CSXPCClient *_xpcClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property (weak, nonatomic) id <CSCommandControlListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)CSXPCClient:(id)arg1 didDisconnect:(_Bool)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;

@end
