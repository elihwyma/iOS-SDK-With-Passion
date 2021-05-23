/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPULayoutInterpolator, UIFont;

@interface MPUFontDescriptor : NSObject

{
    double _defaultPointSizeAdjustment;
    long long _leadingAdjustment;
    double _systemFontSize;
    long long _textStyle;
    _Bool _usesItalic;
    _Bool _usesCondensedMetrics;
    _Bool _wantsMonospaceNumbers;
    long long _weight;
    UIFont *_preferredFont;
    CDStruct_1aa0583f _preferredFontMetrics;
    UIFont *_defaultFont;
    CDStruct_1aa0583f _defaultFontMetrics;
    MPULayoutInterpolator *_customFontPointSizeLayoutInterpolator;
}

@property (nonatomic, readonly) long long textStyle;
@property (nonatomic, readonly) double systemFontSize;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) double defaultPointSizeAdjustment;
@property (nonatomic, readonly) long long leadingAdjustment;
@property (nonatomic, readonly) _Bool usesItalic;
@property (nonatomic, readonly) _Bool usesCondensedMetrics;
@property (nonatomic, readonly) _Bool wantsMonospaceNumbers;
@property (nonatomic, readonly) UIFont *preferredFont;
@property (nonatomic, readonly) double preferredFontAscender;
@property (nonatomic, readonly) double preferredFontBodyLeading;
@property (nonatomic, readonly) double preferredFontCapHeight;
@property (nonatomic, readonly) double preferredFontDescender;
@property (nonatomic, readonly) double preferredFontLineHeight;
@property (nonatomic, readonly) UIFont *defaultFont;
@property (nonatomic, readonly) double defaultFontLineHeight;

+ (id)invalidationHandler;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 defaultPointSizeAdjustment:(double)arg4;
+ (id)_fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 systemFontSize:(double)arg4 defaultPointSizeAdjustment:(double)arg5;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;
+ (double)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)arg1;
+ (id)_baseNativeTextStyleForTextStyle:(long long)arg1;
+ (id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2;
+ (void)_getNativeFontDescriptorSymbolicTraits:(unsigned int *)arg1 nativeTextStyleAttribute:(id *)arg2 forWeight:(long long)arg3 textStyle:(long long)arg4;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(_Bool)arg1 isCondensedMetrics:(_Bool)arg2;
+ (id)_fontPointSizeLayoutInterpolatorForTextStyle:(long long)arg1;
+ (id)fontDescriptorWithTextStyle:(long long)arg1;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 weight:(long long)arg2;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (double)scaledValueForValue:(double)arg1;
- (void)_resetToDefaultValues;
- (void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)arg1;
- (id)_preferredFontDescriptorForTextStyle:(long long)arg1;
- (id)_fontWithBaseNativeFontDescriptorProvider:(CDUnknownBlockType)arg1;
- (id)_defaultFontDescriptorForTextStyle:(long long)arg1;
- (double)defaultFontBodyLeading;
- (void)_invalidateCachedFontsAndMetrics;
- (id)_fontPointSizeLayoutInterpolator;
- (double)defaultFontAscender;
- (double)defaultFontCapHeight;
- (double)defaultFontDescender;

@end
