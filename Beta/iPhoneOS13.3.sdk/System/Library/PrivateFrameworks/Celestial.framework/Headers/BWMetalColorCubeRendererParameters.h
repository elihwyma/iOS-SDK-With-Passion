/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWColorLookupCache, CIFilter, NSData, NSString;

@interface BWMetalColorCubeRendererParameters : NSObject

{
    CIFilter *_colorFilter;
    BWColorLookupCache *_colorLookupCache;
    NSData *_foregroundColorLookupTable;
    NSData *_backgroundColorLookupTable;
    float _interpolationFractionComplete;
}

@property (retain, nonatomic, readonly) BWColorLookupCache *colorLookupCache;
@property (retain, nonatomic) NSData *foregroundColorLookupTable;
@property (retain, nonatomic) NSData *backgroundColorLookupTable;
@property (retain, nonatomic) CIFilter *colorFilter;
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
- (void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;
- (id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2;

@end
