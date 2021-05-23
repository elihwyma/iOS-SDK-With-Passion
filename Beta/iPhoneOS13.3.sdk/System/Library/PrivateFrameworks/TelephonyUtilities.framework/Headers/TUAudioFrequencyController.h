/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class AVCAudioPowerSpectrumMeter, NSString;

@protocol OS_dispatch_queue, TUAudioFrequencyControllerDelegate;

@interface TUAudioFrequencyController : NSObject

{
    id <TUAudioFrequencyControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    AVCAudioPowerSpectrumMeter *_powerSpectrumMeter;
}

@property (weak, nonatomic, readonly) id <TUAudioFrequencyControllerDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) AVCAudioPowerSpectrumMeter *powerSpectrumMeter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (float)normalizedPowerLevelForPowerSpectrum:(id)arg1;

- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)meterServerDidDisconnect:(id)arg1;
- (void)registerParticipantPowerSpectrum:(long long)arg1;
- (void)unregisterParticipantPowerSpectrum:(long long)arg1;

@end
