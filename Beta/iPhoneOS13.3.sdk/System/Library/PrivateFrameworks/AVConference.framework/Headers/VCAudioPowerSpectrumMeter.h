/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter

{
    unsigned short _audioSpectrumBinCount;
    struct _VCAudioPowerSpectrumMeterRealtimeContext _realtimeContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *realtimeContext;

- (void)dealloc;
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;
- (void)unregisterAllStreams;

@end
