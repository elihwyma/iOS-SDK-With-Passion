/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLFunction, MTLLibrary;

@interface MetalRANSACDispatcher : NSObject

{
    float inlierLimit;
    id <MTLCommandQueue> m_metalCommandQueue;
    id <MTLDevice> m_metalDevice;
    id <MTLFunction> m_metalKernelFunction;
    id <MTLLibrary> m_metalLibrary;
    id <MTLComputePipelineState> m_metalPipeline;
    unsigned long long _m_numThreadsPerGroup;
    unsigned long long _m_maxCorrespondences;
    id <MTLBuffer> _m_mX;
    id <MTLBuffer> _m_mXhat;
    id <MTLBuffer> _m_ScoreBuffer;
    id <MTLBuffer> _m_RansacParams;
    id <MTLBuffer> _m_RansacHomographies;
    id <MTLBuffer> _m_ModelScores;
    struct CGSize frameSize;
}

@property (retain, nonatomic) id <MTLDevice> m_metalDevice;
@property (retain, nonatomic) id <MTLLibrary> m_metalLibrary;
@property (retain, nonatomic) id <MTLCommandQueue> m_metalCommandQueue;
@property (retain, nonatomic) id <MTLFunction> m_metalKernelFunction;
@property (retain, nonatomic) id <MTLComputePipelineState> m_metalPipeline;
@property (nonatomic) unsigned long long m_numThreadsPerGroup;
@property (nonatomic) unsigned long long m_maxCorrespondences;
@property (retain, nonatomic) id <MTLBuffer> m_mX;
@property (retain, nonatomic) id <MTLBuffer> m_mXhat;
@property (retain, nonatomic) id <MTLBuffer> m_ScoreBuffer;
@property (retain, nonatomic) id <MTLBuffer> m_RansacParams;
@property (retain, nonatomic) id <MTLBuffer> m_RansacHomographies;
@property (retain, nonatomic) id <MTLBuffer> m_ModelScores;
@property (nonatomic) float inlierLimit;
@property (nonatomic) struct CGSize frameSize;

- (id)initWithMaxCorrespondences:(unsigned long long)arg1;
- (void)performRansacOnData:(unsigned int)arg1 firstPointSet:(const float *)arg2 secondPointSet:(const float *)arg3 pointWeights:(const float *)arg4 homographies:(const struct ransac_homography_record *)arg5 numHomographies:(unsigned int)arg6 homScores:(float *)arg7;
- (void)assureSizeAndCopyToMetalBuffer:(id *)arg1 fromData:(const void *)arg2 dataSize:(unsigned long long)arg3 metalResourceOptions:(unsigned long long)arg4;

@end
