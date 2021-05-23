/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CIFilter, NSArray, NSString;

@interface BWCoreImageFilterRendererParameters : NSObject

{
    NSArray *_filters;
    CIFilter *_originalOutputFilter;
    _Bool _requiresFaceLandmarks;
    _Bool _requiresDepthMap;
}

@property (copy, nonatomic) NSArray *filters;
@property (retain, nonatomic) CIFilter *originalOutputFilter;
@property (nonatomic, readonly) _Bool requiresDepthMap;
@property (nonatomic, readonly) _Bool requiresFaceLandmarks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) float interpolationFractionComplete;

+ (void)initialize;
+ (_Bool)containsFilterRequiringFaceLandmarks:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2;
- (int)prepareForRenderingWithInputVideoFormat:(id)arg1;
- (int)depthTypeForFilter:(id)arg1;
- (void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;
- (_Bool)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2;
- (void)_ensureResourceRequirementsForFilters:(id)arg1 outputRequiresFaceLandmarks:(_Bool *)arg2 outputRequiresDepthMap:(_Bool *)arg3;

@end
