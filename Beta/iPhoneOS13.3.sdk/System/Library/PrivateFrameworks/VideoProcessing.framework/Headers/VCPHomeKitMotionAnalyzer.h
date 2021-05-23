/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer

{
    NSMutableArray *_regions;
    float *_diff;
    float *_ptrFirst;
    float *_ptrLast;
    struct Scaler _scaler;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *>> _frameArray;
    int _frameWidth;
    int _frameHeight;
    int _width;
    int _height;
    int _stride;
    int _blockSize;
    int _widthBlockNum;
    int _heightBlockNum;
    float _actionScore;
}

@property (readonly) float actionScore;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)setPixelBuffer:(struct __CVBuffer *)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (id)regionsOfInterest;
- (int)calculateFrameDifference:(struct __CVBuffer *)arg1;
- (int)computeRegionsofInterest;

@end
