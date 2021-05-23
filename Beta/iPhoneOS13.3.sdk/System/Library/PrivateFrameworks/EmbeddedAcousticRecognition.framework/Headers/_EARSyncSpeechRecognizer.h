/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSString, _EARFormatter;

@protocol OS_dispatch_queue;

@interface _EARSyncSpeechRecognizer : NSObject

{
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    struct shared_ptr<quasar::SyncSpeechRecognizer> _syncRecognizer;
    NSString *_configPath;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (id)getSpeechRecognitionResultFromTokens:(vector_2c247c42)arg1 taskName:(id)arg2;
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(_Bool)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;
- (id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;
- (id)resultsWithEndedAudio;

@end
