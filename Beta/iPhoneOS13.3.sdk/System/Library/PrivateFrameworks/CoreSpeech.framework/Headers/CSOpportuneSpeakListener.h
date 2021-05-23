/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioRecordContext, CSAudioStream, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, NSMutableArray, NSString;

@protocol CSAudioSessionProviding, CSAudioStreamProviding, CSOpportuneSpeakListenerDelegate, OS_dispatch_queue;

@interface CSOpportuneSpeakListener : NSObject

{
    _Bool _isMediaPlayingNow;
    int _remoteVADSPGRatio;
    id <CSOpportuneSpeakListenerDelegate> _delegate;
    CSAudioStream *_audioStream;
    CSSPGEndpointAnalyzer *_spgEndpointAnalyzer;
    id <CSAudioStreamProviding> _audioStreamProvider;
    id <CSAudioSessionProviding> _audioSessionProvider;
    CSAudioRecordContext *_latestContext;
    NSMutableArray *_remoteVADAlignBuffer;
    unsigned long long _remoteVADAlignCount;
    NSObject<OS_dispatch_queue> *_alignBufferQueue;
    CSPlainAudioFileWriter *_audioFileWriter;
}

@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSSPGEndpointAnalyzer *spgEndpointAnalyzer;
@property (nonatomic) int remoteVADSPGRatio;
@property (retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider;
@property (retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider;
@property (retain, nonatomic) CSAudioRecordContext *latestContext;
@property _Bool isMediaPlayingNow;
@property (retain, nonatomic) NSMutableArray *remoteVADAlignBuffer;
@property (nonatomic) unsigned long long remoteVADAlignCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alignBufferQueue;
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (weak, nonatomic) id <CSOpportuneSpeakListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)_resetAlignBuffer;
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopListenWithStateReset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addRemoteVADSignal:(_Bool)arg1;
- (_Bool)_shouldReportBoron;
- (_Bool)_popRemoteVADSignal;
- (void)spgEndpointAnalyzer:(id)arg1 hasSilenceScoreEstimate:(double)arg2;
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;

@end
