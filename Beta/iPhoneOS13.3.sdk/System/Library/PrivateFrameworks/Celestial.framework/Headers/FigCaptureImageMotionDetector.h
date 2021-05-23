/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigCaptureImageMotionDetector : NSObject

{
    int _width;
    int _height;
    int *_intRowSum;
    int *_intColSum;
    struct {
        double **rowSums;
        double **colSums;
        unsigned int curIdx;
        unsigned int count;
        unsigned int size;
    } _imgProj;
    double *_tmpSum1;
    double *_tmpSum2;
    double *_corrArray;
    int _rowSumLength;
    int _rowSumCapacity;
    int _colSumLength;
    int _colSumCapacity;
    int _processedBufferCount;
    struct CGRect _sumROI;
    float _stationaryThreshold;
    int _maximumSearchRange;
    CDStruct_4d1c11a6 _motionStatistics;
}

@property (nonatomic, readonly) CDStruct_4d1c11a6 motionStatistics;
@property (nonatomic) float stationaryThreshold;
@property (nonatomic, readonly) int maximumSearchRange;

- (id)init;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (int)setRoi:(struct CGRect)arg1 actualROI:(struct CGRect *)arg2;
- (int)setCentralROIAndGetRect:(struct CGRect *)arg1;
- (int)processPixelBuffer:(struct __CVBuffer *)arg1;
- (void)resetProcessingState;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maximumSearchRange:(int)arg3 frameRingSize:(int)arg4;
- (int)_allocateArrays:(int)arg1 height:(int)arg2 frameRingSize:(int)arg3;
- (int)_computeStatistics;
- (int)processPixelBuffer:(struct __CVBuffer *)arg1 metadataDictionary:(id)arg2;
- (void)_freeAllocatedArrays;

@end
