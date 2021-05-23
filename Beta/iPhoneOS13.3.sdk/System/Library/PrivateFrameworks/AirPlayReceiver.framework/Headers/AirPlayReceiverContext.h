/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

@class AirPlayReceiverMediaRemoteHelper;

__attribute__((visibility("hidden")))
@interface AirPlayReceiverContext : NSObject

{
    struct AirPlayReceiverSessionPrivate *_session;
    struct __CFArray *_audioSessions;
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    unsigned char _audioSessionActive;
    float _outputVolume;
    unsigned int _powerAssertion;
    AirPlayReceiverMediaRemoteHelper *_mediaRemoteHelper;
}

- (void)_handleAVAudioSessionInterruptionEnded;
- (void)_handleAVAudioSessionInterruptionBegan;

@end
