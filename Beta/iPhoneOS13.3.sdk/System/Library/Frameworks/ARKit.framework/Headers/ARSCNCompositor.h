/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARFrame, ARMatteGenerator, ARSCNView, SCNTechnique;

@protocol MTLDevice, MTLLibrary, MTLRenderPipelineState;

@interface ARSCNCompositor : NSObject

{
    id <MTLDevice> _device;
    ARSCNView *_view;
    SCNTechnique *_technique;
    ARMatteGenerator *_matteGenerator;
    id <MTLLibrary> _mattingLibrary;
    id <MTLRenderPipelineState> _resampleML;
    id <MTLRenderPipelineState> _resampleDepthML;
    unsigned long long _uncertaintyRadius;
    unsigned long long _erodeRadius;
    struct CGSize _screenResolution;
    struct CGSize _workingResolution;
    float _workingScaleFactor;
    float _mattingScaleFactor;
    _Bool _disableReverseZ;
    _Bool _showOcclusionGeometry;
    long long _compositorAlgorithm;
    ARFrame *_currentFrame;
    long long _mode;
    unsigned long long _foregroundBitMask;
    long long _currentOrientation;
    double _depthScale;
    unsigned long long _dilationRadius;
    double _filterEpsilon;
    double _filterScale;
    double _filterOffset;
}

@property (retain, nonatomic) ARFrame *currentFrame;
@property (nonatomic, readonly) long long mode;
@property (nonatomic) long long compositorAlgorithm;
@property (nonatomic) unsigned long long foregroundBitMask;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) _Bool showOcclusionGeometry;
@property (nonatomic) unsigned long long uncertaintyRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) double depthScale;
@property (nonatomic) unsigned long long dilationRadius;
@property (nonatomic) double filterEpsilon;
@property (nonatomic) double filterScale;
@property (nonatomic) double filterOffset;

+ (id)mattingWithDepthAndDualTechnique;
+ (id)mattingTechniqueDual;
+ (id)techniqueDictionaryWithName:(id)arg1;

- (void)dealloc;
- (void)executeOverlayMatteCallbackDual:(id)arg1;
- (void)executeOcclusionDepthStencilCallback:(id)arg1;
- (CDStruct_14d5dc5e)orientedVerticesWithResolution:(struct CGSize)arg1;
- (void)encodeAlphaResampleToCommandBuffer:(id)arg1 resolution:(struct CGSize)arg2 input:(id)arg3 output:(id)arg4;
- (void)encodeDepthResampleToCommandBuffer:(id)arg1 resolution:(struct CGSize)arg2 input:(id)arg3 output:(id)arg4;
- (id)initWithView:(id)arg1 mode:(long long)arg2 algorithm:(long long)arg3;

@end
