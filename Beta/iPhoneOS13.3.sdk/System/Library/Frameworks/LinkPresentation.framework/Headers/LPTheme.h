/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPCaptionBarStyle, LPImageViewStyle, LPPointUnit, LPTapToLoadViewStyle, LPTextViewStyle, LPVideoViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPTheme : NSObject

{
    long long _style;
    unsigned long long _sizeClass;
    long long _platform;
    _Bool _isFallbackIcon;
    UIColor *_backgroundColor;
    UIColor *_highlightColor;
    LPCaptionBarStyle *_captionBar;
    LPTextViewStyle *_quotedText;
    LPImageViewStyle *_mediaImage;
    LPImageViewStyle *_placeholderIcon;
    LPVideoViewStyle *_mediaVideo;
    UIColor *_mediaBackgroundColor;
    LPCaptionBarStyle *_mediaTopCaptionBar;
    LPCaptionBarStyle *_mediaBottomCaptionBar;
    LPTapToLoadViewStyle *_tapToLoad;
    LPPointUnit *_maximumWidth;
    LPPointUnit *_maximumIntrinsicHeight;
    double _widthFractionForTallMedia;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic, readonly) LPCaptionBarStyle *captionBar;
@property (nonatomic, readonly) LPTextViewStyle *quotedText;
@property (nonatomic, readonly) LPImageViewStyle *mediaImage;
@property (nonatomic, readonly) LPImageViewStyle *placeholderIcon;
@property (nonatomic, readonly) LPVideoViewStyle *mediaVideo;
@property (retain, nonatomic) UIColor *mediaBackgroundColor;
@property (nonatomic, readonly) LPCaptionBarStyle *mediaTopCaptionBar;
@property (nonatomic, readonly) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (nonatomic, readonly) LPTapToLoadViewStyle *tapToLoad;
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (retain, nonatomic) LPPointUnit *maximumIntrinsicHeight;
@property (nonatomic) double widthFractionForTallMedia;

+ (id)secondaryLabelColor;
+ (void)addClient:(id)arg1;
+ (id)themeWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3 sizeClass:(unsigned long long)arg4;
+ (id)iconPlatterPaddingForReason:(long long)arg1;
+ (id)iconPlatterCornerRadius;
+ (id)regularTheme;
+ (double)largestIconSizeInPoints;
+ (id)primaryLabelColor;
+ (void)invalidateThemeCache;

- (id)valueForUndefinedKey:(id)arg1;
- (id)CSSTextForThemeProperty:(id)arg1 allowsAlternateProperties:(_Bool)arg2;
- (id)valueForThemeProperty:(id)arg1;
- (id)CSSTextForProperty:(id)arg1 withValue:(id)arg2 allowsAlternateProperties:(_Bool)arg3;
- (id)CSSCustomPropertiesForThemePropertiesInSet:(id)arg1;
- (id)initWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3 sizeClass:(unsigned long long)arg4;
- (void)adjustForStyle;

@end
