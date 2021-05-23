/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PKInkFeatheringDescriptor, PKInkParticleDescriptor, PKInkRenderingDescriptor, PKInkSmoothingDescriptor;

@interface PKInkBehavior : NSObject

{
    _Bool _timeDependent;
    _Bool _usesAzimuthOrAltitude;
    _Bool _showBrushIndicator;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    _Bool _variableSnappedWidth;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    unique_ptr_94812230 _weightFunction;
    vector_2b0a8222 _radiusOutput;
    vector_2b0a8222 _opacityOutput;
    vector_2b0a8222 _edgeWidthOutput;
    vector_2b0a8222 _aspectRatioOutput;
    vector_2b0a8222 _brushOpacityOutput;
    NSString *_variant;
    PKInkRenderingDescriptor *_renderingDescriptor;
    double _blendAlpha;
    double _targetMultiple;
    double _baseAlpha;
    PKInkSmoothingDescriptor *_smoothingDescriptor;
    PKInkFeatheringDescriptor *_featheringDescriptor;
}

@property (nonatomic, readonly) NSString *variant;
@property (nonatomic, readonly) PKInkRenderingDescriptor *renderingDescriptor;
@property (nonatomic, readonly) PKInkParticleDescriptor *particleDescriptor;
@property (nonatomic, readonly) NSArray *inkFunctions;
@property (nonatomic) double blendAlpha;
@property (nonatomic) double targetMultiple;
@property (nonatomic) double baseAlpha;
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor;

+ (id)arrayFromVector:(vector_b67dfe3a)arg1;
+ (id)inkFunctionForProperty:(unsigned long long)arg1 outputFunctions:(vector_2b0a8222 *)arg2 index:(unsigned long long)arg3;
+ (double)inkRadiusOverride;

- (id)description;
- (id).cxx_construct;
- (_Bool)isEraser;
- (double)radiusForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (double)edgeWidthForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (id)inkFunctionsForProperty:(unsigned long long)arg1;
- (vector_2b0a8222 *)outputVectorForProperty:(unsigned long long)arg1;
- (id)functionsForProperty:(unsigned long long)arg1;
- (struct PKOutputFunction)outputFunctionFromInkFunction:(id)arg1;
- (void)setUsesAzimuthOrAltitude:(_Bool)arg1;
- (void)setTimeDependent:(_Bool)arg1;
- (double)solve:(vector_2b0a8222 *)arg1 forPoint:(CDStruct_f17e9403)arg2 context:(CDStruct_5237edf5 *)arg3 weight:(double)arg4;
- (double)alphaForStrokeColor:(struct CGColor *)arg1;
- (double)evaluateWeight:(double)arg1;
- (double)solveForTime:(vector_2b0a8222 *)arg1 forTime:(double)arg2 stillChanging:(_Bool *)arg3;
- (id)initWithRenderingDescriptor:(id)arg1 variant:(id)arg2;
- (void)setWeightFunction:(unique_ptr_94812230)arg1;
- (void)inkFunctionDidChange:(id)arg1;
- (void)removeInkFunction:(id)arg1;
- (void)addNewInkFunction:(id)arg1;
- (void)setRadiusOutput:(vector_2b0a8222)arg1;
- (void)setOpacityOutput:(vector_2b0a8222)arg1;
- (void)setEdgeWidthOutput:(vector_2b0a8222)arg1;
- (void)setAspectRatioOutput:(vector_2b0a8222)arg1;
- (void)setBrushOpacityOutput:(vector_2b0a8222)arg1;
- (double)particleSpacingForRadius:(double)arg1;
- (double)brushOpacityForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (double)alphaForStroke:(id)arg1;
- (struct _PKStrokePoint)outputForPoint:(CDStruct_f17e9403)arg1 context:(CDStruct_5237edf5 *)arg2;
- (struct _PKStrokePoint)outputTimePoint:(struct _PKStrokePoint)arg1 atTime:(double)arg2 stillChanging:(_Bool *)arg3;
- (_Bool)immutableVelocity;
- (_Bool)isTimeDependent;
- (_Bool)usesAzimuthOrAltitude;
- (void)setShowBrushIndicator:(_Bool)arg1;
- (_Bool)showBrushIndicator;
- (void)setRulerOffsetScale:(double)arg1;
- (void)setRulerOffsetConstant:(double)arg1;
- (_Bool)variableSnappedWidth;
- (void)setVariableSnappedWidth:(_Bool)arg1;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint)arg1 inputType:(long long)arg2 inputScale:(double)arg3;
- (id)particleTextureName;

@end
