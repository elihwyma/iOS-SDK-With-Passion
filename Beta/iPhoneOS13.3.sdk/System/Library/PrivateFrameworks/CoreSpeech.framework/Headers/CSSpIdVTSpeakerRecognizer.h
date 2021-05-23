/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSMediaPlayingMonitor, CSSpIdContext, CSSpIdProcessor, CSSpeakerIdNviOrchestrator, CSVolumeMonitor, NSDictionary, NSString;

@protocol CSAudioFileWriter, CSSpIdSpeakerRecognizerDelegate, OS_dispatch_queue;

@interface CSSpIdVTSpeakerRecognizer : NSObject

{
    double _lastScoreReportTimeStamp;
    _Bool _processingEnded;
    CSSpIdContext *_spIdCtx;
    NSString *_invocationStyleStr;
    id <CSSpIdSpeakerRecognizerDelegate> _delegate;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _tdEndInSampleCount;
    unsigned long long _totalNumSamplesReceived;
    CSSpIdProcessor *_tdtiSpIdProcessor;
    id <CSAudioFileWriter> _dbgTdTiUttLogger;
    unsigned long long _tdtiEndInSampleCount;
    unsigned long long _numTdTiSamplesProcessed;
    unsigned long long _myriadResult;
    NSDictionary *_lastSpeakerIdInfo;
    NSObject<OS_dispatch_queue> *_queue;
    CSMediaPlayingMonitor *_mediaPlayingMonitor;
    CSVolumeMonitor *_volumeMonitor;
    CSSpeakerIdNviOrchestrator *_nviOrchestrator;
}

@property (retain, nonatomic) CSSpIdContext *spIdCtx;
@property (retain, nonatomic) NSString *invocationStyleStr;
@property (weak, nonatomic) id <CSSpIdSpeakerRecognizerDelegate> delegate;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) unsigned long long tdEndInSampleCount;
@property (nonatomic) unsigned long long totalNumSamplesReceived;
@property (retain, nonatomic) CSSpIdProcessor *tdtiSpIdProcessor;
@property (retain, nonatomic) id <CSAudioFileWriter> dbgTdTiUttLogger;
@property (nonatomic) unsigned long long tdtiEndInSampleCount;
@property (nonatomic) unsigned long long numTdTiSamplesProcessed;
@property (nonatomic) _Bool processingEnded;
@property (nonatomic) unsigned long long myriadResult;
@property (retain, nonatomic) NSDictionary *lastSpeakerIdInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSMediaPlayingMonitor *mediaPlayingMonitor;
@property (retain, nonatomic) CSVolumeMonitor *volumeMonitor;
@property (retain, nonatomic) CSSpeakerIdNviOrchestrator *nviOrchestrator;
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
- (void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)arg1 hasFinished:(_Bool)arg2;
- (void)processMyriadDecision:(unsigned long long)arg1;

@end
