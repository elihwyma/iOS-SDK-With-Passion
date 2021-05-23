/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSAudioDecoderDelegate;

@interface CSAudioDecoder : NSObject

{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _inASBD;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioDecoderDelegate> _delegate;
}

@property (weak) id <CSAudioDecoderDelegate> delegate;

+ (id)opusDecoder;

- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;
- (void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned int)arg5;

@end
