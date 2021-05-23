/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTEffect, NSArray, NSDictionary, PVImageBuffer;

@interface JTEffectsPreviewGenerationRequest : NSObject

{
    _Bool _highQuality;
    _Bool _scaleAnimationTransformInfoToOutputSize;
    int _priority;
    unsigned int _parentCode;
    unsigned int _childCode;
    PVImageBuffer *_image;
    JTEffect *_generatorEffect;
    NSArray *_effectStack;
    struct NSDictionary *_customRenderingProperties;
    NSArray *_pickerPreviewEffectList;
    struct CGSize _outputSize;
    CDStruct_1b6d18a9 _renderTime;
    struct PVTransformAnimationInfo _animationTransformInfo;
}

@property (nonatomic) _Bool scaleAnimationTransformInfoToOutputSize;
@property (nonatomic, readonly) PVImageBuffer *image;
@property (nonatomic, readonly) JTEffect *generatorEffect;
@property (nonatomic, readonly) NSArray *effectStack;
@property (nonatomic, readonly) struct CGSize outputSize;
@property (nonatomic, readonly) CDStruct_1b6d18a9 renderTime;
@property (copy, nonatomic) NSDictionary *customRenderingProperties;
@property (retain, nonatomic) NSArray *pickerPreviewEffectList;
@property (nonatomic) struct PVTransformAnimationInfo animationTransformInfo;
@property (nonatomic) _Bool highQuality;
@property (nonatomic) int priority;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic) unsigned int childCode;

- (id)generatorJobWithGraphBuilder:(id)arg1;
- (id)initWithInput:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize)arg3 renderTime:(CDStruct_1b6d18a9)arg4;
- (void)setTransformAnimationInfo:(struct PVTransformAnimationInfo)arg1 scaleToOutput:(_Bool)arg2;
- (id)initWithInputGenerator:(id)arg1 effectStack:(id)arg2 outputSize:(struct CGSize)arg3 renderTime:(CDStruct_1b6d18a9)arg4;
- (id)placeholderGeneratorBackground;
- (struct CGAffineTransform)sourceTransform;
- (id)sourceIGNodeUsingGraphBuilder:(id)arg1;
- (id)renderWithInputs:(id)arg1 inputIDs:(id)arg2 time:(CDStruct_1b6d18a9)arg3 metadata:(id)arg4;

@end
