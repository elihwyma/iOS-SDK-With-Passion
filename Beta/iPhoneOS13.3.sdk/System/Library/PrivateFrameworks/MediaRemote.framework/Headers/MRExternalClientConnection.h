/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolClientConnection.h>

@class MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection

{
    _Bool _registeredToNowPlayingUpdates;
    _Bool _registeredToVolumeUpdates;
    _Bool _registeredKeyboardUpdates;
    _Bool _registeredToOutputDeviceUpdates;
    _Bool _cryptoEnabled;
    unsigned int _voiceRecordingState;
    MRCryptoPairingSession *_cryptoSession;
}

@property (nonatomic) _Bool registeredToNowPlayingUpdates;
@property (nonatomic) _Bool registeredToVolumeUpdates;
@property (nonatomic) _Bool registeredKeyboardUpdates;
@property (nonatomic) _Bool registeredToOutputDeviceUpdates;
@property (nonatomic) unsigned int voiceRecordingState;
@property (retain, nonatomic) MRCryptoPairingSession *cryptoSession;
@property (nonatomic) _Bool cryptoEnabled;

- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (id)decryptData:(id)arg1 error:(id *)arg2;
- (id)encryptDataForMessage:(id)arg1;

@end
