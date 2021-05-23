/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AirPlayReceiverMediaRemoteHelper : NSObject

{
    struct __CFArray *_mediaRemoteSupportedCommands;
    unsigned int _mediaRemotePlaybackState;
    CDUnknownBlockType _mediaRemoteCommandHandler;
    void *_mediaRemotePlayer;
    void *_mediaRemotePlayerPathRef;
    unsigned char _usePerPlayerAPI;
    const void *_receiverSessionHelperID;
}

- (void)dealloc;
- (void)setPlayerState:(unsigned int)arg1;
- (void)setMRNowPlayingInfo:(struct __CFDictionary *)arg1 policy:(unsigned char)arg2;
- (void)setCommandHandlerBlockForSession:(struct AirPlayReceiverSessionPrivate *)arg1;
- (void)resetCommandHandlerBlockForSession:(struct AirPlayReceiverSessionPrivate *)arg1;
- (int)setSupportedCommands;
- (int)setSupportedCommandsFromSerializedArray:(struct __CFArray *)arg1;
- (void)setDefaultSupportedCommands;
- (void)setCanBeNowPlayingApplication:(unsigned char)arg1;
- (void)makeNowPlayingPlayer;
- (int)updateAPNowPlayingInfo:(struct __CFDictionary *)arg1;
- (void)updateNowPlayingProgress:(struct __CFDictionary *)arg1;
- (void)updateNowPlayingClient:(struct __CFData *)arg1;
- (id)initWithPlayerId:(struct __CFString *)arg1;

@end
