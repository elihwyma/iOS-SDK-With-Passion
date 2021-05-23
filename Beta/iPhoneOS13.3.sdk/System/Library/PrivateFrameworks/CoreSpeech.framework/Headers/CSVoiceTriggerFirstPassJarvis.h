/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioProvider, CSAudioStream, CSAudioStreamHolding, CSKeywordAnalyzerNDEAPI, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, CSVoiceTriggerRTModel, CSVoiceTriggerSecondPass, NSDictionary, NSString;

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerFirstPassJarvis : NSObject

{
    _Bool _hasReceivedNDEAPIResult;
    _Bool _hasTriggerCandidate;
    _Bool _isSecondPassRunning;
    _Bool _isSiriClientListening;
    id <CSVoiceTriggerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioStream *_audioStream;
    CSAudioProvider *_audioProvider;
    CSAudioStreamHolding *_audioStreamHolding;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDEAPI *_keywordAnalyzerNDEAPI;
    unsigned long long _numProcessedSamples;
    unsigned long long _jarvisVoiceTriggerTimeout;
    unsigned long long _activeChannel;
    NSDictionary *_jarvisTriggerResult;
    unsigned long long _earlyDetectFiredMachTime;
    CSSPGEndpointAnalyzer *_endpointAnalyzer;
    NSString *_deviceId;
    CSVoiceTriggerRTModel *_rtModel;
    CSPlainAudioFileWriter *_audioFileWriter;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    unsigned long long _secondChanceHotTillMachTime;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic) _Bool hasReceivedNDEAPIResult;
@property (nonatomic) _Bool hasTriggerCandidate;
@property (nonatomic) unsigned long long numProcessedSamples;
@property (nonatomic) unsigned long long jarvisVoiceTriggerTimeout;
@property (nonatomic) unsigned long long activeChannel;
@property (retain, nonatomic) NSDictionary *jarvisTriggerResult;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (retain, nonatomic) CSSPGEndpointAnalyzer *endpointAnalyzer;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) CSVoiceTriggerRTModel *rtModel;
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) _Bool isSecondPassRunning;
@property (nonatomic) _Bool isSiriClientListening;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (weak, nonatomic) id <CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)jarvisAudioLoggingFilePath;
+ (id)jarvisAudioLogDirectory;
+ (id)timeStampString;

- (id)init;
- (void)start;
- (void)reset;
- (void)_reset;
- (void)setAsset:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg1;
- (void)_clearTriggerCandidate;
- (void)_didStopAudioStream;
- (void)_notifyJarvisVoiceTriggerReject;
- (void)_reportJarvisVoiceTriggerFire;
- (void)_didDetectKeywordFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_holdAudioStreamWithTimeout:(double)arg1;
- (void)_requestStartAudioStreamWitContext:(id)arg1 startStreamOption:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didStartAudioStream;
- (void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg1 activationInfo:(id)arg2 triggerHostTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cancelAudioStreamHold;
- (void)_createSecondPassIfNeeded;
- (void)_handleSecondPassResult:(unsigned long long)arg1 deviceId:(id)arg2 voiceTriggerInfo:(id)arg3 secondChanceCandidate:(_Bool)arg4 error:(id)arg5;
- (void)_teardownSecondPass;
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;

@end
