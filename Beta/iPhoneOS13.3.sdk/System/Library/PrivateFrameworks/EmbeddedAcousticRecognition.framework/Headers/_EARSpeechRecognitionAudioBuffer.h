/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class _EARSpeechRecognizer;

@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject

{
    shared_ptr_809f9c31 _buffer;
    NSObject<OS_dispatch_queue> *_queue;
    _EARSpeechRecognizer *_speechRecognizer;
    _Bool _cancelled;
    _Bool _ended;
}

+ (void)initialize;

- (id).cxx_construct;
- (void)_detachFromRecognizer;
- (id)_initWithAudioBuffer:(shared_ptr_809f9c31)arg1 speechRecognizer:(id)arg2;
- (void)_setUnderlyingBuffer:(shared_ptr_809f9c31)arg1;
- (void)addAudioSampleData:(id)arg1;
- (void)endAudio;
- (void)cancelRecognition;
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;
- (void)triggerServerSideEndPointer;

@end
