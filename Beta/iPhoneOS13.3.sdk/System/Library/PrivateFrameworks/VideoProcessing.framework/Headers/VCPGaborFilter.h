/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPGaborFilter : NSObject

{
    struct Kernel **_filterBanks;
    int _numScales;
    int _numOrientations;
    int _num;
}

- (void)dealloc;
- (int)createGaborFilterKernel:(struct Kernel)arg1 sigmaX:(float)arg2 sigmaY:(float)arg3 lambda:(float)arg4 thetaInDegree:(float)arg5 phaseInDegree:(float)arg6;
- (id)initWithNumberOfScales:(int)arg1 numOfOrientations:(int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (int)processWithFilterScaleIdx:(int)arg1 orientIdx:(int)arg2 srcImage:(const float *)arg3 outImage:(float *)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;

@end
