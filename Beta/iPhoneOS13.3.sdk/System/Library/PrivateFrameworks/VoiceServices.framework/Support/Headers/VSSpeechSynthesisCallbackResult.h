/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString;

@interface VSSpeechSynthesisCallbackResult : NSObject

{
    vector_aab22ae2 _samples;
    vector_c392d7c8 _markers;
    long long _state;
    NSError *_error;
    NSString *_text;
    long long _stopMark;
    CDUnknownBlockType _callback;
    NSMutableArray *_wordTimings;
    unsigned long long _samplesProcessed;
    unsigned long long _lastUTF8Offset;
    unsigned long long _lastUTF16Offset;
    unsigned long long _numOfPromptsTriggered;
    struct AudioStreamBasicDescription _asbd;
}

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long stopMark;
@property (copy, nonatomic) CDUnknownBlockType callback;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *wordTimings;
@property (nonatomic) struct AudioStreamBasicDescription asbd;
@property (nonatomic) unsigned long long samplesProcessed;
@property (nonatomic) unsigned long long lastUTF8Offset;
@property (nonatomic) unsigned long long lastUTF16Offset;
@property (nonatomic) unsigned long long numOfPromptsTriggered;

- (id).cxx_construct;
- (id)initWithCallback:(CDUnknownBlockType)arg1;
- (vector_aab22ae2 *)sampleBuffer;
- (id)phonemes;
- (id)mutablePCMData;
- (id)wordTimingInfos;
- (void)processMarkerBuffer;
- (unsigned long long)utf8BytesForChar:(unsigned short)arg1;
- (unsigned long long)utf16OffsetFromUTF8:(unsigned long long)arg1;
- (int)synthesisCallback:(int)arg1;
- (id)pcmData;
- (vector_c392d7c8 *)markerBuffer;

@end
