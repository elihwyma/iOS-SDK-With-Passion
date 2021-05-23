/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXKitSettings : PXSettings

{
    _Bool _defaultAsyncTextRenderingEnabled;
    _Bool _defaultUseShapeLayerForText;
    _Bool _defaultTextAutoscalingEnabled;
    _Bool _defaultTextTruncationEnabled;
    _Bool _allowCapitalization;
    _Bool _allowFontFallback;
    _Bool _simulateSlowTextTypesetting;
    _Bool _drawTypographicGuidelines;
    _Bool _useFancyDarkening;
    long long _defaultLabelTypesettingMode;
    double _defaultTextMinimumScaleFactor;
    double _defaultTruncatedTextMinimumScaleFactor;
    double _textAutoscalingPrecision;
    long long _deviceGraphicsQuality;
    double _simulatedSafeAreaHorizontalInsets;
}

@property (nonatomic) _Bool defaultAsyncTextRenderingEnabled;
@property (nonatomic) long long defaultLabelTypesettingMode;
@property (nonatomic) _Bool defaultUseShapeLayerForText;
@property (nonatomic) _Bool defaultTextAutoscalingEnabled;
@property (nonatomic) double defaultTextMinimumScaleFactor;
@property (nonatomic) _Bool defaultTextTruncationEnabled;
@property (nonatomic) double defaultTruncatedTextMinimumScaleFactor;
@property (nonatomic) double textAutoscalingPrecision;
@property (nonatomic) _Bool allowCapitalization;
@property (nonatomic) _Bool allowFontFallback;
@property (nonatomic) _Bool simulateSlowTextTypesetting;
@property (nonatomic) _Bool drawTypographicGuidelines;
@property (nonatomic) _Bool useFancyDarkening;
@property (nonatomic) long long deviceGraphicsQuality;
@property (nonatomic) double simulatedSafeAreaHorizontalInsets;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
