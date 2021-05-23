/*
 Image: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol ACCAudioClientProtocol, ACCAudioXPCServerProtocol;

@interface ACCAudioClient : NSObject

{
    id <ACCAudioClientProtocol> _delegate;
    NSXPCConnection *_serverConnection;
    id <ACCAudioXPCServerProtocol> _remoteObject;
}

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id <ACCAudioXPCServerProtocol> remoteObject;
@property (weak, nonatomic) id <ACCAudioClientProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)connectToServer;
- (_Bool)setDigitalAudioSampleRate:(unsigned int)arg1;
- (unsigned int)supportedDigitalAudioSampleRate:(unsigned int)arg1;
- (id)supportedDigitalAudioSampleRates;
- (id)deviceAudioStates;
- (_Bool)allowBackgroundAudioForClient:(id)arg1;
- (void)registerForAccessoryDigitalAudioNotifications;
- (void)unregisterForAccessoryDigitalAudioNotifications;

@end
