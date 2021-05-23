/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNSmileDetector.h>

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector

{
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (id)init;
- (float *)getInputBuffer;
- (int)computeSmileScore:(float *)arg1;

@end
