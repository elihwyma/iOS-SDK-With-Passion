/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPLandmarkValidator : NSObject

{
    VCPCNNModel *_model;
    VCPCNNData *_input;
    float *_transArray;
    float *_meanLandmarkLoc;
    char *_triIndexMap;
    unsigned char _numTri;
    char *_triList;
    float *_orientation;
}

@property float *orientation;

- (void)dealloc;
- (id)initWithModelFile:(id)arg1 paramFile:(struct __sFILE *)arg2 numTri:(unsigned char)arg3 triList:(char *)arg4 angle:(float *)arg5;
- (int)validateOneImage:(struct __CVBuffer *)arg1 landmarks:(float *)arg2 numofLandmarks:(int)arg3 score:(float *)arg4;

@end
