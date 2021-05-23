/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface MKInfoCardThemeManager : NSObject

{
    _Bool _themeWasExplicitySet;
    NSDictionary *_colors;
    CDUnknownBlockType _tintColorProvider;
    UIColor *_currentTintColor;
    _Bool _useSmallFont;
    unsigned long long _themeType;
}

@property (nonatomic) _Bool useSmallFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long themeType;
@property (nonatomic, readonly) NSString *javaScriptName;
@property (nonatomic, readonly) _Bool isDarkTheme;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *lightTextColor;
@property (nonatomic, readonly) UIColor *tertiaryTextColor;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UIColor *highlightedTintColor;
@property (nonatomic, readonly) UIColor *separatorLineColor;
@property (nonatomic, readonly) UIColor *rowColor;
@property (nonatomic, readonly) UIColor *selectedRowColor;
@property (nonatomic, readonly) UIColor *highlightedActionRowTextColor;
@property (nonatomic, readonly) UIColor *disabledActionRowTextColor;
@property (nonatomic, readonly) UIColor *disabledActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundColor;
@property (nonatomic, readonly) UIColor *normalActionRowBackgroundPressedColor;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonNormalColor;
@property (nonatomic, readonly) UIColor *headerPrimaryButtonHighlightedColor;
@property (nonatomic, readonly) UIColor *transitOntimeTextColor;
@property (nonatomic, readonly) UIColor *transitDelayedTextColor;
@property (nonatomic, readonly) UIColor *transitChevronBackgroundColor;
@property (nonatomic, readonly) UIColor *normalBackgroundColor;
@property (nonatomic, readonly) UIColor *buttonNormalColor;
@property (nonatomic, readonly) UIColor *buttonHighlightedColor;

+ (void)setTheme:(unsigned long long)arg1;
+ (id)currentTheme;
+ (unsigned long long)themeType;
+ (id)themeWithThemeType:(unsigned long long)arg1;
+ (void)setTintColorProvider:(CDUnknownBlockType)arg1;

- (id)init;
- (void)_tintColorDidChange;
- (id)_initWithThemeType:(unsigned long long)arg1;
- (void)_setTheme:(unsigned long long)arg1;
- (unsigned long long)_currentSystemTheme;
- (void)_setTintColorProvider:(CDUnknownBlockType)arg1;
- (_Bool)_isInSpotlightContext;

@end
