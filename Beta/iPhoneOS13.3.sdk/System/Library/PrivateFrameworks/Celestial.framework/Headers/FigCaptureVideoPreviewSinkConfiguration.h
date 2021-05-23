/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration

{
    _Bool _depthDataDeliveryEnabled;
    _Bool _filterRenderingEnabled;
    NSArray *_filters;
    float _simulatedAperture;
    float _portraitLightingEffectStrength;
    _Bool _primaryCaptureRectModificationEnabled;
    double _primaryCaptureRectAspectRatio;
    struct CGPoint _primaryCaptureRectCenter;
    long long _primaryCaptureRectUniqueID;
}

@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool filterRenderingEnabled;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) _Bool primaryCaptureRectModificationEnabled;
@property (nonatomic) double primaryCaptureRectAspectRatio;
@property (nonatomic) struct CGPoint primaryCaptureRectCenter;
@property (nonatomic) long long primaryCaptureRectUniqueID;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
