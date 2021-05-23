/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class MPSImageAreaMin, MPSImageThresholdBinary, MPSImageThresholdBinaryInverse;

@protocol MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture, MattingFilter;

__attribute__((visibility("hidden")))
@interface XMattingSolver : NSObject

{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLComputePipelineState> _applySolverConstraintsKernel;
    id <MTLComputePipelineState> _solverConstraintsKernel;
    id <MTLTexture> _tmpSegmentation;
    id <MTLTexture> _fgErodedSegmentation;
    id <MTLTexture> _bgErodedSegmentation;
    id <MattingFilter> _mattingFilter;
    MPSImageThresholdBinary *_fgThresholdFilter;
    MPSImageThresholdBinaryInverse *_bgThresholdFilter;
    MPSImageAreaMin *_erosionFilter;
    CDStruct_d861fc9d _config;
}

@property CDStruct_d861fc9d config;

- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (int)allocateResources:(CDStruct_d861fc9d)arg1;
- (int)enqueueSolveOn:(id)arg1 constraints:(id)arg2 colorGuide:(id)arg3 extraGuide:(id)arg4 inputTexture:(id)arg5 outputTexture:(id)arg6;
- (void)releaseResources;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)encodeConstraintsOn:(id)arg1 segmentation:(id)arg2 constraints:(id)arg3;
- (int)encodeApplySolverConstraintsOn:(id)arg1 constraints:(id)arg2 filteredSegmentation:(id)arg3 segmentation:(id)arg4;

@end
