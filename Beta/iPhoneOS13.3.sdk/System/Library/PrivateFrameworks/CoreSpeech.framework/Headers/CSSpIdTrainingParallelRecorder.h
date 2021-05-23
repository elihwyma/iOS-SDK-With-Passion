/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSPlainAudioFileWriter, CSSpIdContext, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CSSpIdTrainingParallelRecorder : NSObject

{
    CSSpIdContext *_spIdCtx;
    NSString *_invocationStyle;
    CSPlainAudioFileWriter *_parallelRecordingUttLogger;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_lastSpeakerIdInfo;
}

@property (retain, nonatomic) CSSpIdContext *spIdCtx;
@property (retain, nonatomic) NSString *invocationStyle;
@property (retain, nonatomic) CSPlainAudioFileWriter *parallelRecordingUttLogger;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *lastSpeakerIdInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)setCVTTriggerPhraseDetected;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processMyriadDecision:(unsigned long long)arg1;

@end
