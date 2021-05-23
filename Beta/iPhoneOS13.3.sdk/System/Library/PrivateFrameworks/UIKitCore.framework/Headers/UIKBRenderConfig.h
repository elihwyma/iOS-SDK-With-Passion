/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UIButtonBarButtonVisualProvider;

@interface UIKBRenderConfig : NSObject <Swift>

{
    _Bool _useEmojiStyles;
    _Bool _lightKeyboard;
    long long _forceQuality;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightKeycapOpacity;
    _UIButtonBarButtonVisualProvider *_buttonBarVisualProvider;
}

@property (nonatomic) _Bool lightKeyboard;
@property (nonatomic) long long forceQuality;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurSaturation;
@property (nonatomic) double keycapOpacity;
@property (nonatomic) double lightKeycapOpacity;
@property (nonatomic, readonly) _Bool whiteText;
@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, readonly) long long blurEffectStyle;
@property (nonatomic, readonly) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider;

+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (id)defaultEmojiConfig;
+ (id)lowQualityDarkConfig;
+ (long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
