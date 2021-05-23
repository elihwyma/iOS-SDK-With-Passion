/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSStyle.h>

@class NSString;

@interface TSWPParagraphStyle : TSSStyle

{
    void *_coreTextParagraphStyle;
    struct __CFDictionary *_styleCache;
    struct __CFDictionary *_scalePercentStyleCaches;
}

@property (nonatomic, readonly) NSString *presetKind;

+ (void)initialize;
+ (id)properties;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;
+ (id)paragraphProperties;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)p_normalDecimalSeparator;
+ (id)deprecatedProperties;
+ (id)styleSummaryForPropertyMap:(id)arg1;
+ (id)nonEmphasisParagraphProperties;
+ (id)presetStyleDescriptor;

- (void)dealloc;
- (_Bool)transformsFontSizes;
- (SEL)mapThemePropertyMapSelector;
- (id)fullPropertyMap;
- (void)setOverridePropertyMap:(id)arg1;
- (void)clearStyleCaches;
- (unsigned long long)p_lineBoundsOptions;
- (struct __CTParagraphStyle *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg1 writingDirection:(int)arg2 lineBoundsOptions:(unsigned long long)arg3;
- (struct __CFDictionary *)p_newCoreTextCharacterStyle:(id)arg1 allowLigatures:(_Bool)arg2 scalePercent:(unsigned long long)arg3;
- (struct __CFDictionary *)getTypesetterAttributes:(id)arg1 scalePercent:(unsigned long long)arg2 isRightToLeft:(_Bool)arg3;
- (BOOL)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg1;
- (struct __CTFont *)findCachedFontForCharacterStyle:(id)arg1 scalePercent:(unsigned long long)arg2;
- (id)followingParagraphStyle;
- (id)contentTag;
- (void)setInitialListStyle:(id)arg1;
- (id)initialListStyle;
- (void)localizeForRightToLeft;
- (void)localizeForBidi:(_Bool)arg1;
- (id)styleSummary;

@end
