/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWColorLookupCache, CIFilter, NSData, NSString;

@interface BWStreamingCVAFilterRendererParameters : NSObject

{
    CIFilter *_colorFilter;
    BWColorLookupCache *_colorLookupCache;
    NSData *_foregroundColorLookupTable;
    NSData *_backgroundColorLookupTable;
    _Bool _studioAndContourRenderingEnabled;
    _Bool _stageRenderingEnabled;
    float _interpolationFractionComplete;
    long long _renderingStrategy;
}

@property (retain, nonatomic, readonly) BWColorLookupCache *colorLookupCache;
@property (retain, nonatomic) NSData *foregroundColorLookupTable;
@property (retain, nonatomic) NSData *backgroundColorLookupTable;
@property (retain, nonatomic) CIFilter *colorFilter;
@property (nonatomic, readonly) long long renderingStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) float interpolationFractionComplete;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)prepareForRenderingWithInputVideoFormat:(id)arg1;
- (void)_ensureParametersForColorFilter:(id)arg1 outputRenderingStrategy:(long long *)arg2;
- (id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2 studioAndContourRenderingEnabled:(_Bool)arg3 stageRenderingEnabled:(_Bool)arg4;
- (void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;
- (_Bool)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2;

@end
