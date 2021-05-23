/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/NviSignalData.h>

@class NSArray, NSDictionary;

@interface NviDirectionalitySignalData : NviSignalData

{
    float _confidence;
    float _azimuth;
    float _estimatedAzimuth;
    unsigned long long _startSample;
    unsigned long long _endSample;
    double _processedAudioDurMs;
    NSArray *_spatialSpectrumData;
    NSDictionary *_azDistribution;
}

@property (nonatomic) unsigned long long startSample;
@property (nonatomic) unsigned long long endSample;
@property (nonatomic) float confidence;
@property (nonatomic) float azimuth;
@property (nonatomic) float estimatedAzimuth;
@property (nonatomic) double processedAudioDurMs;
@property (retain, nonatomic) NSArray *spatialSpectrumData;
@property (retain, nonatomic) NSDictionary *azDistribution;
@property (nonatomic, readonly) float mostSampledAzimuth;

+ (id)headerString;

- (id)description;
- (id)stringForLogging;
- (id)initWithStartSample:(unsigned long long)arg1 endSample:(unsigned long long)arg2 confidence:(float)arg3 azimuth:(float)arg4 estimatedAzimuth:(float)arg5;
- (id)_spatialSpectrumLogStr;

@end
