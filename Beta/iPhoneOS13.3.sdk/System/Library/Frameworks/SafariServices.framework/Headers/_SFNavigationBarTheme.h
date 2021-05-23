/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFBarTheme.h>

@class UIColor;

@interface _SFNavigationBarTheme : _SFBarTheme

{
    _Bool _backdropIsExtreme;
    _Bool _backdropIsRed;
    _Bool _backdropIsGreen;
    _Bool _platterBackdropIsDark;
    long long _platterOverrideUserInterfaceStyle;
    long long _platterTextFieldOverrideUserInterfaceStyle;
    long long _platterKeyboardOverrideAppearance;
    UIColor *_textColor;
    UIColor *_secureTextColor;
    UIColor *_warningTextColor;
    UIColor *_annotationTextColor;
    UIColor *_progressBarTintColor;
    UIColor *_platterTextColor;
    UIColor *_platterSecureTextColor;
    UIColor *_platterWarningTextColor;
    UIColor *_platterAnnotationTextColor;
    UIColor *_platterPlaceholderTextColor;
    UIColor *_platterSelectionColor;
    UIColor *_platterProgressBarTintColor;
}

@property (nonatomic, readonly) long long platterOverrideUserInterfaceStyle;
@property (nonatomic, readonly) long long platterTextFieldOverrideUserInterfaceStyle;
@property (nonatomic, readonly) long long platterKeyboardOverrideAppearance;
@property (nonatomic, readonly) _Bool backdropIsExtreme;
@property (nonatomic, readonly) _Bool backdropIsRed;
@property (nonatomic, readonly) _Bool backdropIsGreen;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *secureTextColor;
@property (nonatomic, readonly) UIColor *warningTextColor;
@property (nonatomic, readonly) UIColor *annotationTextColor;
@property (nonatomic, readonly) UIColor *progressBarTintColor;
@property (nonatomic, readonly) _Bool platterBackdropIsDark;
@property (nonatomic, readonly) UIColor *platterTextColor;
@property (nonatomic, readonly) UIColor *platterSecureTextColor;
@property (nonatomic, readonly) UIColor *platterWarningTextColor;
@property (nonatomic, readonly) UIColor *platterAnnotationTextColor;
@property (nonatomic, readonly) UIColor *platterPlaceholderTextColor;
@property (nonatomic, readonly) UIColor *platterSelectionColor;
@property (nonatomic, readonly) UIColor *platterProgressBarTintColor;

- (id)URLAccessoryButtonTintColorForInputMode:(unsigned long long)arg1;
- (id)platterTextColorForPlatterAlpha:(double)arg1;
- (id)annotationTextColorForPlatterAlpha:(double)arg1;
- (id)platterWarningTextColorForPlatterAlpha:(double)arg1;
- (id)platterSecureTextColorForPlatterAlpha:(double)arg1;
- (id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;
- (id)_colorForPlatterTextColor:(id)arg1 regularColor:(id)arg2 withPlatterAlpha:(double)arg3;

@end
