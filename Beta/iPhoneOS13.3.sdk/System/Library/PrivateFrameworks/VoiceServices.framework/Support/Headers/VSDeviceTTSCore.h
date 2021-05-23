/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

@class NSError, VSAudioData, VSCachingService, VSInstrumentMetrics, VSSpeechEngine, VSSpeechRequest, VSVoiceAssetSelection, VSVoiceBooster, VSVoiceResourceAsset;

@protocol VSDeviceTTSCoreDelegate;

@interface VSDeviceTTSCore : NSOperation

{
    VSSpeechRequest *_request;
    id <VSDeviceTTSCoreDelegate> _delegate;
    VSInstrumentMetrics *_instrumentMetrics;
    NSError *_error;
    VSAudioData *_audio;
    VSSpeechEngine *_engine;
    VSCachingService *_cachingService;
    VSVoiceAssetSelection *_selectedVoice;
    VSVoiceResourceAsset *_selectedVoiceResource;
    VSVoiceBooster *_voiceBooster;
}

@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSVoiceAssetSelection *selectedVoice;
@property (retain, nonatomic) VSVoiceResourceAsset *selectedVoiceResource;
@property (retain, nonatomic) VSVoiceBooster *voiceBooster;
@property (nonatomic, readonly) VSSpeechRequest *request;
@property (weak, nonatomic) id <VSDeviceTTSCoreDelegate> delegate;
@property (weak, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) VSAudioData *audio;
@property (retain, nonatomic) VSSpeechEngine *engine;

- (void)cancel;
- (void)main;
- (id)initWithRequest:(id)arg1;
- (id)md5hash;
- (id)prepareForSynthesis;
- (id)voiceSelectionWithRequest:(id)arg1 error:(id *)arg2;
- (id)getCacheForHash:(id)arg1;
- (void)reportWordTimingInfo:(id)arg1;
- (void)reportAudio:(id)arg1;
- (void)adjustWordTimingInfo:(id)arg1;
- (id)voiceSelection_noRetry_WithRequest:(id)arg1 error:(id *)arg2;

@end
