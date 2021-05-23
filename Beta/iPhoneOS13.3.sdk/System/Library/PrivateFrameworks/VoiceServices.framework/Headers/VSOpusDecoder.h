/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@interface VSOpusDecoder : NSObject

{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _asbd;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)beginChunkDecoderForStreamDescription:(struct AudioStreamBasicDescription)arg1;
- (id)decodeChunk:(id)arg1 outError:(id *)arg2;
- (void)endChunkDecoding;
- (struct OpaqueAudioConverter *)_opusDecoder:(struct AudioStreamBasicDescription)arg1;
- (id)decodeChunks:(id)arg1 streamDescription:(struct AudioStreamBasicDescription)arg2 outError:(id *)arg3;

@end
