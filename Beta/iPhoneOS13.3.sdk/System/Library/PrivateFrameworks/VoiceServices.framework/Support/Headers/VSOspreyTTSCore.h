/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

@class NSError, VSAudioData, VSInstrumentMetrics, VSServerTTSClient, VSServerTTSConfig, VSSpeechInternalSettings, VSSpeechRequest, VSTimeoutCondition, VSVoiceAsset, VSVoiceResourceAsset;

@protocol VSOspreyTTSCoreDelegate;

@interface VSOspreyTTSCore : NSOperation

{
    VSSpeechRequest *_request;
    id <VSOspreyTTSCoreDelegate> _delegate;
    VSInstrumentMetrics *_instrumentMetrics;
    NSError *_error;
    VSAudioData *_audio;
    VSVoiceAsset *_voice;
    VSVoiceResourceAsset *_voiceResource;
    VSServerTTSClient *_serverTTSClient;
    VSServerTTSConfig *_serverConfig;
    VSSpeechInternalSettings *_internalSettings;
    double _bufferDurationLimit;
    VSTimeoutCondition *_timeoutCondition;
}

@property (retain, nonatomic) VSServerTTSClient *serverTTSClient;
@property (retain, nonatomic) VSServerTTSConfig *serverConfig;
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings;
@property (nonatomic) double bufferDurationLimit;
@property (retain, nonatomic) VSTimeoutCondition *timeoutCondition;
@property (nonatomic, readonly) VSSpeechRequest *request;
@property (weak, nonatomic) id <VSOspreyTTSCoreDelegate> delegate;
@property (weak, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) VSAudioData *audio;
@property (retain, nonatomic) VSVoiceAsset *voice;
@property (retain, nonatomic) VSVoiceResourceAsset *voiceResource;

- (void)cancel;
- (void)main;
- (double)timeout;
- (id)initWithRequest:(id)arg1;
- (void)waitFor:(double)arg1;
- (void)performStreamingOspreyTTS;
- (void)performRoundTripOspreyTTS;

@end
