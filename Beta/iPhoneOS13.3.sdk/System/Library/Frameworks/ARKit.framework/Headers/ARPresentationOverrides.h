/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARPresentationOverrides : NSObject

{
    _Bool _skipDistortion;
    _Bool _enableCAC;
    _Bool _skipVignette;
    _Bool _skipWarp;
    _Bool _skipPositionalWarp;
    _Bool _showDistortion;
    _Bool _showCAC;
    _Bool _skipGammaCorrection;
    _Bool _perQuadCAC;
    _Bool _overrideCACThreshold;
    _Bool _showPerformanceHUD;
    _Bool _enableThermalMitigation;
    float _CACThresholdValue;
    float _alignmentPeriod;
    long long _minVsyncsPerFrame;
    long long _forceDisplayMode;
}

@property (nonatomic) _Bool skipDistortion;
@property (nonatomic) _Bool enableCAC;
@property (nonatomic) _Bool skipVignette;
@property (nonatomic) _Bool skipWarp;
@property (nonatomic) _Bool skipPositionalWarp;
@property (nonatomic) _Bool showDistortion;
@property (nonatomic) _Bool showCAC;
@property (nonatomic) _Bool skipGammaCorrection;
@property (nonatomic) long long minVsyncsPerFrame;
@property (nonatomic) long long forceDisplayMode;
@property (nonatomic, readonly) _Bool perQuadCAC;
@property (nonatomic, readonly) _Bool overrideCACThreshold;
@property (nonatomic, readonly) float CACThresholdValue;
@property (nonatomic, readonly) float alignmentPeriod;
@property (nonatomic, readonly) _Bool showPerformanceHUD;
@property (nonatomic, readonly) _Bool enableThermalMitigation;

- (id)init;
- (void)updateDefaults;
- (void)updateBool:(id)arg1 value:(_Bool *)arg2;
- (void)updateInteger:(id)arg1 value:(long long *)arg2;
- (void)updateFloat:(id)arg1 value:(float *)arg2;
- (void)setBoolKey:(id)arg1 value:(_Bool)arg2;
- (void)setIntegerKey:(id)arg1 value:(long long)arg2;
- (void)setFloatKey:(id)arg1 value:(float)arg2;
- (void)clearModifications;
- (void)setShowPerformanceHUD:(_Bool)arg1;
- (void)setAlignmentPeriod:(float)arg1;

@end
