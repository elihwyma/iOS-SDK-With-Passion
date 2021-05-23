/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, SBIcon, SBIconView, UIColor, UIFont, _UILegibilitySettings;

@protocol SBIconListLayoutProvider;

@interface SBIconLabelImageParametersBuilder : NSObject

{
    UIFont *_font;
    _Bool _hasSetTextInsets;
    _Bool _accessibilityReduceTransparencyEnabled;
    SBIcon *_icon;
    SBIconView *_iconView;
    Class _iconViewClass;
    NSString *_iconLocation;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_contentSizeCategory;
    UIColor *_focusHighlightColor;
    double _scale;
    long long _labelAccessoryType;
    UIColor *_textColor;
    NSString *_overrideText;
    NSString *_text;
    struct UIEdgeInsets _textInsets;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic, readonly) SBIcon *icon;
@property (retain, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) Class iconViewClass;
@property (nonatomic, readonly) NSString *iconLocation;
@property (retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider;
@property (nonatomic, readonly) struct CGSize iconImageSize;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) UIColor *focusHighlightColor;
@property (nonatomic) double scale;
@property (nonatomic) long long labelAccessoryType;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets textInsets;
@property (retain, nonatomic) NSString *overrideText;

+ (id)defaultFontForContentSizeCategory:(id)arg1 languageInsets:(struct UIEdgeInsets *)arg2;
+ (struct UIEdgeInsets)insetsForFont:(id)arg1;
+ (double)_normalFontSizeForSizeParameter:(long long)arg1;
+ (long long)_fontSizeParameterForContentSizeCategory:(id)arg1;

- (id)init;
- (void)setIcon:(id)arg1;
- (struct CGSize)_maxSize;
- (id)listLayout;
- (void)setIcon:(id)arg1 forLocation:(id)arg2;
- (id)buildParameters;
- (_Bool)_hasValidInputs;
- (id)_fontWithLanguageInsets:(struct UIEdgeInsets *)arg1;
- (_Bool)_canTruncateLabel;
- (_Bool)_canTightenLabel;
- (void)setFont:(id)arg1 insets:(struct UIEdgeInsets)arg2;

@end
