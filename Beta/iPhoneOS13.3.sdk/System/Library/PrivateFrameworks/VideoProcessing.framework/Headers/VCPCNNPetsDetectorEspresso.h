/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNPetsDetector.h>

@class NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector

{
    int _maxNumRegions;
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}

+ (id)sharedModel:(id)arg1;

- (void)dealloc;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (id)initWithMaxNumRegions:(int)arg1;
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(CDUnknownBlockType)arg3;

@end
