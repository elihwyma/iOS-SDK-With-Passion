/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSValue, UIColor, UIImage, _UIBackdropColorSettings, _UIBackdropView;

@interface _UIBackdropViewSettings : NSObject

{
    struct __CFRunLoopObserver *_runLoopObserver;
    _UIBackdropView *_backdrop;
    long long _style;
    long long _graphicsQuality;
    _Bool _explicitlySetGraphicsQuality;
    _Bool _requiresColorStatistics;
    _UIBackdropColorSettings *_colorSettings;
    long long _renderingHint;
    long long _stackingLevel;
    _Bool _highlighted;
    _Bool _selected;
    _Bool _enabled;
    _Bool _backdropVisible;
    _Bool _shouldDoRasterizationAndAlphaHack;
    double _zoom;
    double _grayscaleTintLevel;
    double _grayscaleTintAlpha;
    double _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    _Bool _lightenGrayscaleWithSourceOver;
    UIColor *_colorTint;
    double _colorTintAlpha;
    double _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    double _colorBurnTintLevel;
    double _colorBurnTintAlpha;
    UIImage *_colorBurnTintMaskImage;
    double _darkeningTintAlpha;
    double _darkeningTintHue;
    double _darkeningTintSaturation;
    double _darkeningTintBrightness;
    UIImage *_darkeningTintMaskImage;
    _Bool _darkenWithSourceOver;
    double _blurRadius;
    NSString *_blurQuality;
    double _saturationDeltaFactor;
    double _filterMaskAlpha;
    UIImage *_filterMaskImage;
    UIColor *_legibleColor;
    UIColor *_combinedTintColor;
    double _scale;
    double _statisticsInterval;
    _Bool _usesBackdropEffectView;
    _Bool _usesGrayscaleTintView;
    _Bool _usesColorTintView;
    _Bool _usesColorBurnTintView;
    _Bool _usesContentView;
    _Bool _usesDarkeningTintView;
    _Bool _usesColorOffset;
    double _colorOffsetAlpha;
    NSValue *_colorOffsetMatrix;
    _Bool _appliesTintAndBlurSettings;
    long long _suppressSettingsDidChange;
    _Bool _designMode;
    long long _blurHardEdges;
    unsigned long long _version;
}

@property (nonatomic) long long suppressSettingsDidChange;
@property (nonatomic) _Bool explicitlySetGraphicsQuality;
@property (nonatomic) unsigned long long version;
@property (nonatomic, setter=setDesignMode:) _Bool designMode;
@property (nonatomic) _Bool usesBackdropEffectView;
@property (nonatomic) _Bool usesGrayscaleTintView;
@property (nonatomic) _Bool usesColorTintView;
@property (nonatomic) _Bool usesColorBurnTintView;
@property (nonatomic) _Bool usesContentView;
@property (nonatomic) _Bool usesDarkeningTintView;
@property (nonatomic) _Bool usesColorOffset;
@property (nonatomic) double colorOffsetAlpha;
@property (retain, nonatomic) NSValue *colorOffsetMatrix;
@property (nonatomic) _Bool appliesTintAndBlurSettings;
@property (nonatomic) long long graphicsQuality;
@property (nonatomic) _UIBackdropView *backdrop;
@property (nonatomic, readonly) long long style;
@property (nonatomic) _Bool requiresColorStatistics;
@property (retain, nonatomic) _UIBackdropColorSettings *colorSettings;
@property (nonatomic) long long renderingHint;
@property (nonatomic) long long stackingLevel;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isBackdropVisible) _Bool backdropVisible;
@property (nonatomic) _Bool zoomsBack;
@property (nonatomic) double zoom;
@property (nonatomic) double grayscaleTintLevel;
@property (nonatomic) double grayscaleTintAlpha;
@property (nonatomic) double grayscaleTintMaskAlpha;
@property (retain, nonatomic) UIImage *grayscaleTintMaskImage;
@property (nonatomic) _Bool lightenGrayscaleWithSourceOver;
@property (retain, nonatomic) UIColor *colorTint;
@property (nonatomic) double colorTintAlpha;
@property (nonatomic) double colorTintMaskAlpha;
@property (retain, nonatomic) UIImage *colorTintMaskImage;
@property (nonatomic) double colorBurnTintLevel;
@property (nonatomic) double colorBurnTintAlpha;
@property (retain, nonatomic) UIImage *colorBurnTintMaskImage;
@property (nonatomic) double darkeningTintAlpha;
@property (nonatomic) double darkeningTintHue;
@property (nonatomic) double darkeningTintSaturation;
@property (nonatomic) double darkeningTintBrightness;
@property (retain, nonatomic) UIImage *darkeningTintMaskImage;
@property (nonatomic) _Bool darkenWithSourceOver;
@property (nonatomic) double blurRadius;
@property (copy, nonatomic) NSString *blurQuality;
@property (nonatomic) long long blurHardEdges;
@property (nonatomic) _Bool blursWithHardEdges;
@property (nonatomic) double saturationDeltaFactor;
@property (nonatomic) double filterMaskAlpha;
@property (retain, nonatomic) UIImage *filterMaskImage;
@property (retain, nonatomic) UIColor *legibleColor;
@property (nonatomic, readonly) UIColor *combinedTintColor;
@property (nonatomic) double scale;
@property (nonatomic) double statisticsInterval;

+ (id)darkeningTintColor;
+ (id)settingsPreservingHintsFromSettings:(id)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForStyle:(long long)arg1;
+ (id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForPrivateStyle:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setStyle:(long long)arg1;
- (void)setDefaultValues;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (id)initWithDefaultValuesForGraphicsQuality:(long long)arg1;
- (_Bool)requiresBackdropLayer;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (id)initWithDefaultValues;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)clearRunLoopObserver;
- (void)setValuesFromModel:(id)arg1;
- (void)restoreDefaultValues;
- (void)addKeyPathObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)setStackinglevel:(long long)arg1;

@end
