/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

#import <voiced_tts/Swift-Protocol.h>

@class NSCondition, NSDate, NSError, NSMutableArray, NSString, VSAudioData, VSAudioPlaybackService, VSDeviceTTSCore, VSInstrumentMetrics, VSSpeechRequest;

@protocol VSSpeechServiceDelegate;

@interface VSSiriInlineTTSStreamTask : NSOperation <Swift>

{
    id <VSSpeechServiceDelegate> _delegate;
    VSSpeechRequest *_request;
    NSString *_streamID;
    VSInstrumentMetrics *_instrumentMetrics;
    VSDeviceTTSCore *_deviceTTSCore;
    VSInstrumentMetrics *_deviceTTSInstrumentMetrics;
    VSAudioPlaybackService *_playbackServices;
    NSError *_error;
    NSCondition *_refreshTimeoutCondition;
    VSAudioData *_finalAudio;
    NSMutableArray *_finalTimingInfo;
    double _bufferDurationLimit;
    double _timeoutValue;
    NSDate *_playbackBeginDate;
}

@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) VSDeviceTTSCore *deviceTTSCore;
@property (retain, nonatomic) VSInstrumentMetrics *deviceTTSInstrumentMetrics;
@property (retain, nonatomic) VSAudioPlaybackService *playbackServices;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSCondition *refreshTimeoutCondition;
@property (retain, nonatomic) VSAudioData *finalAudio;
@property (retain, nonatomic) NSMutableArray *finalTimingInfo;
@property (nonatomic) double bufferDurationLimit;
@property (nonatomic) double timeoutValue;
@property (retain, nonatomic) NSDate *playbackBeginDate;
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
- (void)startPlayback;
- (id)voiceKey;
- (id)md5hash;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)audioPowerProvider;
- (void)synthesisCore:(id)arg1 didReceiveAudio:(id)arg2;
- (void)synthesisCore:(id)arg1 didReceiveWordTimingInfo:(id)arg2;
- (id)initWithRequest:(id)arg1 withStreamID:(id)arg2;
- (void)handleStreamNotification:(id)arg1;
- (void)handleBegin:(id)arg1;
- (void)handleChunk:(id)arg1;
- (void)handleEnd:(id)arg1;
- (void)signalNewDataWithError:(id)arg1;
- (_Bool)waitForNewData:(double)arg1;

@end
