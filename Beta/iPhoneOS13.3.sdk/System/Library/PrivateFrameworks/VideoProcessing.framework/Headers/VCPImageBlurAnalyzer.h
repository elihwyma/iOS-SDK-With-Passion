/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray, VCPCNNBlurAnalyzer, VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer

{
    float _sharpnessBlocks[16];
    NSArray *_faces;
    VCPCNNModel *_faceModel;
    VCPCNNData *_faceInput;
    _Bool _useGPU;
    _Bool _sdof;
    float _contrast;
    VCPCNNBlurAnalyzer *_blurAnalyzer;
    float _sharpness;
    float _textureScore;
}

@property (readonly) float sharpness;
@property (readonly) float textureScore;

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (void)setFaceResults:(id)arg1;
- (int)prepareFaceBlurModel:(_Bool)arg1;
- (int)scaleRegion:(struct CGRect *)arg1 ofImage:(struct __CVBuffer *)arg2 toData:(id)arg3 withWidth:(int)arg4 andHeight:(int)arg5;
- (float)getFaceScoreFromOutput:(id)arg1 ratio:(float)arg2;
- (int)computeLocalSharpness:(struct __CVBuffer *)arg1;
- (void)spatialPooling;
- (int)computeCNNFaceSharpness:(struct __CVBuffer *)arg1 result:(float *)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)computeSharpnessScore:(float *)arg1 forFacesInImage:(struct __CVBuffer *)arg2;
- (id)initWithFaceResults:(id)arg1 sdof:(_Bool)arg2;

@end
