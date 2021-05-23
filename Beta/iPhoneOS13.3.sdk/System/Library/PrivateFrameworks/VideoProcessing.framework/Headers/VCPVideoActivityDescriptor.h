/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoActivityDescriptor : NSObject

{
    float descriptors[10];
    int _widthInMb;
    int _heightInMb;
    long long *_motionMagnitudeHistogram;
    float *_motionMagnitude;
}

@property (readonly) float *descriptors;

- (void)dealloc;
- (void)reset;
- (id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2;
- (void)ExtractActivityDescriptorFromStats:(struct EncodeStats *)arg1;
- (void)spatialDescriptorWithMvMagnitudeMean:(float)arg1;

@end
