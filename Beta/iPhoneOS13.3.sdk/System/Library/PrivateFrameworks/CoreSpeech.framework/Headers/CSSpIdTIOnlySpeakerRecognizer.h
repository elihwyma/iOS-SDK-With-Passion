/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSMediaPlayingMonitor, CSSpIdContext, CSSpIdProcessor, CSVolumeMonitor, NSDictionary, NSString;

@protocol CSAudioFileWriter, CSSpIdSpeakerRecognizerDelegate, OS_dispatch_queue;

@interface CSSpIdTIOnlySpeakerRecognizer : NSObject

{
    _Bool _processingEnded;
    CSSpIdContext *_spIdCtx;
    NSString *_invocationStyle;
    id <CSSpIdSpeakerRecognizerDelegate> _delegate;
    CSSpIdProcessor *_tiSpIdProcessor;
    unsigned long long _tiEndInSampleCount;
    unsigned long long _numTISamplesProcessed;
    unsigned long long _myriadResult;
    NSDictionary *_lastSpeakerIdInfo;
    id <CSAudioFileWriter> _dbgTiUttLogger;
    NSObject<OS_dispatch_queue> *_queue;
    CSMediaPlayingMonitor *_mediaPlayingMonitor;
    CSVolumeMonitor *_volumeMonitor;
}

@property (retain, nonatomic) CSSpIdContext *spIdCtx;
@property (retain, nonatomic) NSString *invocationStyle;
@property (weak, nonatomic) id <CSSpIdSpeakerRecognizerDelegate> delegate;
@property (retain, nonatomic) CSSpIdProcessor *tiSpIdProcessor;
@property (nonatomic) unsigned long long tiEndInSampleCount;
@property (nonatomic) unsigned long long numTISamplesProcessed;
@property (nonatomic) _Bool processingEnded;
@property (nonatomic) unsigned long long myriadResult;
@property (retain, nonatomic) NSDictionary *lastSpeakerIdInfo;
@property (retain, nonatomic) id <CSAudioFileWriter> dbgTiUttLogger;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSMediaPlayingMonitor *mediaPlayingMonitor;
@property (retain, nonatomic) CSVolumeMonitor *volumeMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)speakerIdProcessor:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerIdProcessorFinishedProcessing:(id)arg1 withSpeakerInfo:(id)arg2;
- (void)setCVTTriggerPhraseDetected;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)_endAudioProcessing;
- (void)_processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)processMyriadDecision:(unsigned long long)arg1;

@end
