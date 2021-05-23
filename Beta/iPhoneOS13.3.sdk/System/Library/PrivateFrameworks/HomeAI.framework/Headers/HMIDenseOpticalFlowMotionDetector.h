/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface HMIDenseOpticalFlowMotionDetector : HMFObject

{
    NSMutableArray *_frames;
    NSMutableArray *_quantizedFrames;
    NSMutableDictionary *_minRows;
    NSMutableDictionary *_maxRows;
    NSMutableDictionary *_minCols;
    NSMutableDictionary *_maxCols;
    struct CGSize _size;
}

@property (readonly) struct CGSize size;
@property (readonly) NSMutableArray *frames;
@property (readonly) NSMutableArray *quantizedFrames;
@property (retain) NSMutableDictionary *minRows;
@property (retain) NSMutableDictionary *maxRows;
@property (retain) NSMutableDictionary *minCols;
@property (retain) NSMutableDictionary *maxCols;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (void)setup;
- (void)appendFramePixelBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)detectWithGlobalMotionScore:(float *)arg1;
- (float)computeFlowMagnitudeMatrixFromOriginal:(struct __CVBuffer *)arg1 flowArray:(float *)arg2 error:(id *)arg3;
- (_Bool)quantizedAndBinarizeFrame:(float *)arg1 quantizedFrames:(id)arg2;
- (long long)connectedComponentsQuantizedFrames:(id)arg1;
- (void)unionTheRegoins;
- (struct CGRect)makeRawCropRect:(id)arg1;
- (id)computeOpticalFlow:(struct __CVBuffer *)arg1 with:(struct __CVBuffer *)arg2 globalMotionScore:(float *)arg3;

@end
