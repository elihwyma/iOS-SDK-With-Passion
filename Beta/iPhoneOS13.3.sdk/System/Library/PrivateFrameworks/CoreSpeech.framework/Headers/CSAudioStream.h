/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioStartStreamOption, CSAudioStreamRequest, NSString, NSUUID;

@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;

@interface CSAudioStream : NSObject

{
    _Bool _scheduledFutureSample;
    _Bool _streaming;
    id <CSAudioStreamProvidingDelegate> _delegate;
    unsigned long long _lastForwardedSampleCount;
    NSString *_name;
    CSAudioStreamRequest *_streamRequest;
    NSString *_UUID;
    CSAudioStartStreamOption *_startStreamOption;
    id <CSAudioStreamProviding> _streamProvider;
    NSUUID *_streamingUUID;
}

@property (weak, nonatomic) id <CSAudioStreamProviding> streamProvider;
@property _Bool streaming;
@property (retain) NSUUID *streamingUUID;
@property (weak, nonatomic) id <CSAudioStreamProvidingDelegate> delegate;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic) _Bool scheduledFutureSample;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) CSAudioStreamRequest *streamRequest;
@property (nonatomic, readonly) NSString *UUID;
@property (retain, nonatomic) CSAudioStartStreamOption *startStreamOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isStreaming;
- (id)recordSettings;
- (void)startAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAudioStreamWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (_Bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)isNarrowBand;
- (id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3;
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
