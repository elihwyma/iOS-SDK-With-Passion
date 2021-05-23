/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

#import <voiced_tts/Swift-Protocol.h>

@class NSMutableData, NSString, VSAudioPlaybackService, VSInstrumentMetrics, VSPresynthesizedAudioRequest;

@protocol VSSpeechServiceDelegate;

@interface VSSpeechPresynthesizedTask : NSOperation <Swift>

{
    VSPresynthesizedAudioRequest *_request;
    id <VSSpeechServiceDelegate> _delegate;
    VSAudioPlaybackService *_playbackService;
    VSInstrumentMetrics *_instrumentMetrics;
    NSMutableData *_audioData;
    struct AudioStreamBasicDescription _asbd;
}

@property (nonatomic, readonly) VSPresynthesizedAudioRequest *request;
@property (weak, nonatomic) id <VSSpeechServiceDelegate> delegate;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSMutableData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription asbd;
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
- (double)_clockFactor;
- (id)md5hash;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)audioPowerProvider;

@end
