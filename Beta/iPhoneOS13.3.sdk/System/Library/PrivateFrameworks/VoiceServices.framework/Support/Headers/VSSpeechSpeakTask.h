/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

#import <voiced_tts/Swift-Protocol.h>

@class NSArray, NSError, NSObject, NSString, VSAudioData, VSAudioPlaybackService, VSCachingService, VSInstrumentMetrics, VSSpeechEngine, VSSpeechRequest, VSVoiceAssetSelection, VSVoiceBooster, VSVoiceResourceAsset;

@protocol OS_dispatch_queue, VSSpeechCacheItem, VSSpeechServiceDelegate;

@interface VSSpeechSpeakTask : NSOperation <Swift>

{
    VSSpeechRequest *_request;
    NSArray *_timingInfos;
    id <VSSpeechServiceDelegate> _delegate;
    VSSpeechEngine *_engine;
    VSVoiceBooster *_voiceBooster;
    VSAudioPlaybackService *_playbackService;
    VSVoiceAssetSelection *_voiceSelection;
    VSVoiceResourceAsset *_voiceResource;
    VSCachingService *_cachingService;
    VSInstrumentMetrics *_instrumentMetrics;
    id <VSSpeechCacheItem> _speechCache;
    NSArray *_phonemes;
    VSAudioData *_audio;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_taskAuxiliaryQueue;
}

@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSArray *timingInfos;
@property (weak, nonatomic) id <VSSpeechServiceDelegate> delegate;
@property (retain, nonatomic) VSSpeechEngine *engine;
@property (retain, nonatomic) VSVoiceBooster *voiceBooster;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) VSVoiceAssetSelection *voiceSelection;
@property (retain, nonatomic) VSVoiceResourceAsset *voiceResource;
@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) id <VSSpeechCacheItem> speechCache;
@property (retain, nonatomic) NSArray *phonemes;
@property (retain, nonatomic) VSAudioData *audio;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskAuxiliaryQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)resume;
- (void)main;
- (void)suspend;
- (id)initWithRequest:(id)arg1;
- (_Bool)isSpeaking;
- (void)resumePlayback;
- (void)pausePlayback;
- (id)md5hash;
- (void)fetchVoiceResource;
- (void)fetchVoiceAsset;
- (void)reportTimingInfo;
- (void)speakCachedAudio;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)logFinish;
- (void)prepareForSynthesis;
- (void)startPlaybackServiceWithAudioSessionID:(unsigned int)arg1;
- (void)reportSpeechStart;
- (void)adjustWordTimingInfo;
- (void)waitUntilAudioFinished;
- (id)audioPowerProvider;
- (void)synthesizeAndSpeak;
- (id)_fetchVoiceAsset_NoRetry;

@end
