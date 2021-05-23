/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Speech/SFSpeechRecognitionRequest.h>

@class AVAudioConverter, AVAudioFormat, NSMutableArray, NSObject;

@protocol OS_dispatch_queue, SFSpeechRecognitionBufferDelegate;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest

{
    id <SFSpeechRecognitionBufferDelegate> _bufferDelegate;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioConverter *_converter;
    _Bool _audioEnded;
}

@property (nonatomic, readonly) AVAudioFormat *nativeAudioFormat;

- (id)init;
- (void)endAudio;
- (void)appendAudioPCMBuffer:(id)arg1;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (void)_appendAudioPCMBuffer:(id)arg1;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_endAudio;
- (void)_drainAndClearAudioConverter;
- (void)_convertAndFeedPCMBuffer:(id)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
