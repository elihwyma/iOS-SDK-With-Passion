/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumSource

{
    long long _streamToken;
    struct _VCAudioPowerSpectrumSourceRealtimeContext _realtimeContext;
}

@property (nonatomic, readonly) long long streamToken;
@property (nonatomic, readonly) struct _VCAudioPowerSpectrumSourceRealtimeContext *realtimeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;
- (void)cleanupAudioPowerSpectrumSinks;
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)registerAudioPowerSpectrumSink:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)unregisterAudioPowerSpectrumSink:(id)arg1;

@end
