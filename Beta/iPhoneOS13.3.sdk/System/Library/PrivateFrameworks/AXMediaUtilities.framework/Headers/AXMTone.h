/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMADSREnvelope;

@interface AXMTone : NSObject

{
    unsigned long long _sampleRate;
    double _frequency;
    AXMADSREnvelope *_envelope;
    unsigned long long _waveform;
    double _gain;
    double _aWeighting;
}

@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic, readonly) double frequency;
@property (nonatomic, readonly) AXMADSREnvelope *envelope;
@property (nonatomic) unsigned long long waveform;
@property (nonatomic) double gain;
@property (nonatomic, readonly) double aWeighting;

- (id)init;
- (void)_setFrequency:(double)arg1;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (double)_rawValueForTonePhase:(double)arg1;
- (void)renderInBuffer:(vector_3203cf93 *)arg1 atFrame:(unsigned long long)arg2;

@end
