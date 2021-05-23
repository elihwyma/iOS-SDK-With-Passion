/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

#import <voiced_tts/Swift-Protocol.h>

@class NSArray, NSError, NSString, VSAudioData, VSAudioPlaybackService, VSCachingService, VSDeviceTTSCore, VSInstrumentMetrics, VSOspreyTTSCore, VSServerTTSConfig, VSSpeechInternalSettings, VSSpeechRequest;

@protocol VSSpeechServiceDelegate;

@interface VSSpeechServerTask : NSOperation <Swift>

{
    _Bool _shouldSpeak;
    _Bool _readyForEagerTask;
    _Bool _useServerResponse;
    _Bool _useDeviceSynthesis;
    _Bool _speechStartReported;
    _Bool _isEagerCache;
    _Bool _disableOsprey;
    id <VSSpeechServiceDelegate> _delegate;
    VSSpeechRequest *_request;
    VSInstrumentMetrics *_instrumentMetrics;
    NSError *_error;
    VSAudioPlaybackService *_playbackService;
    NSArray *_wordTimingInfo;
    VSSpeechServerTask *_speakTask;
    VSDeviceTTSCore *_synthesisCore;
    long long _aceChannelRetryTimes;
    long long _serverTTSRetryTimes;
    VSAudioData *_serverAudio;
    NSArray *_deferredTTSTimingInfo;
    VSSpeechInternalSettings *_internalSettings;
    VSOspreyTTSCore *_ospreyCore;
    VSCachingService *_cachingService;
    VSServerTTSConfig *_serverTTSConfig;
    struct _opaque_pthread_cond_t _timeoutCondition;
    struct _opaque_pthread_mutex_t _racingMutex;
}

@property (nonatomic) _Bool shouldSpeak;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) NSArray *wordTimingInfo;
@property (nonatomic) struct _opaque_pthread_cond_t timeoutCondition;
@property (nonatomic) _Bool readyForEagerTask;
@property (retain, nonatomic) VSSpeechServerTask *speakTask;
@property (retain, nonatomic) VSDeviceTTSCore *synthesisCore;
@property (nonatomic) _Bool useServerResponse;
@property (nonatomic) _Bool useDeviceSynthesis;
@property (nonatomic) _Bool speechStartReported;
@property (nonatomic) _Bool isEagerCache;
@property (nonatomic) _Bool disableOsprey;
@property (nonatomic) long long aceChannelRetryTimes;
@property (nonatomic) long long serverTTSRetryTimes;
@property (nonatomic) struct _opaque_pthread_mutex_t racingMutex;
@property (retain, nonatomic) VSAudioData *serverAudio;
@property (retain, nonatomic) NSArray *deferredTTSTimingInfo;
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings;
@property (retain, nonatomic) VSOspreyTTSCore *ospreyCore;
@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSServerTTSConfig *serverTTSConfig;
@property (weak, nonatomic) id <VSSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)main;
- (void)suspend;
- (_Bool)isSpeaking;
- (id)voiceKey;
- (id)md5hash;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)audioPowerProvider;
- (id)playAudioData:(id)arg1;
- (_Bool)shouldDeferDeviceTTS;
- (void)proceedWithSpeechCache:(id)arg1;
- (id)eagerTaskHashForRequest:(id)arg1;
- (void)proceedWithServerTTS;
- (void)writeAudioIfNeeded:(id)arg1;
- (id)handleServerResponse:(id)arg1 timingInfo:(id)arg2;
- (void)broadcastTimeoutCondition;
- (void)startSiriRoundTrip;
- (void)waitSiriRoundTripToFinish;
- (void)fallbackToDeviceSynthesis;
- (id)stringOfSourceOfTTS:(long long)arg1;
- (id)handleDeviceSynthesis:(id)arg1 timingInfo:(id)arg2;
- (void)synthesisCore:(id)arg1 didReceiveAudio:(id)arg2;
- (void)synthesisCore:(id)arg1 didReceiveWordTimingInfo:(id)arg2;
- (void)ospreyCore:(id)arg1 didReceiveAudio:(id)arg2 wordTimingInfo:(id)arg3;
- (void)ospreyCore:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithRequest:(id)arg1 shouldSpeak:(_Bool)arg2;

@end
