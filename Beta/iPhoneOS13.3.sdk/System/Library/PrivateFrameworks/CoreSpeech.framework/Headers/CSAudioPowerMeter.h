/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSAudioPowerMeter : NSObject

{
    int _averagePowerI;
    _Bool _instantaneousMode;
    double _peak;
    double _maxPeak;
    double _decay;
    double _peakDecay;
    double _averagePowerPeak;
    int _peakHoldCount;
    double _sampleRate;
    int _previousBlockSize;
    double _decay1;
    double _peakDecay1;
}

- (void)reset;
- (void)_reset;
- (id)initWithSampleRate:(float)arg1;
- (void)process:(const short *)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3;
- (double)getPeakPowerDB;
- (double)getAveragePowerDB;
- (void)_scaleDecayConstants:(int)arg1;
- (void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3;
- (double)_linearToDB:(double)arg1;
- (double)_ampToDB:(double)arg1;

@end
