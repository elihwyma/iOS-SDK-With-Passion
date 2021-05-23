/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKCSSRule, IKColor, IKFourTuple, NSArray, NSMutableDictionary, NSNumber, NSShadow, NSString, NSURL, UIColor;

@interface IKViewElementStyle : NSObject

{
    _Bool _filterBlockedStyles;
    NSString *_classDescriptorString;
    IKCSSRule *_cssRule;
    NSArray *_mediaQueryList;
    NSMutableDictionary *_styleDict;
    NSMutableDictionary *_overridingValuesByStyle;
}

@property (copy, nonatomic, readonly) IKCSSRule *cssRule;
@property (nonatomic, readonly) NSString *classDescriptorString;
@property (retain, nonatomic) NSArray *mediaQueryList;
@property (retain, nonatomic) NSMutableDictionary *styleDict;
@property (retain, nonatomic) NSMutableDictionary *overridingValuesByStyle;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) IKColor *ikColor;
@property (nonatomic, readonly) IKColor *ikHighlightColor;
@property (nonatomic, readonly) IKColor *ikBackgroundColor;
@property (nonatomic, readonly) IKColor *ikBorderColor;
@property (nonatomic, readonly) NSString *badgeTreatment;
@property (nonatomic, readonly) struct UIEdgeInsets borderMargins;
@property (nonatomic, readonly) struct UIEdgeInsets borderWidths;
@property (nonatomic, readonly) NSString *dividerType;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) NSString *fontWeight;
@property (nonatomic, readonly) long long maxTextLines;
@property (nonatomic, readonly) unsigned long long textAlignment;
@property (nonatomic, readonly) unsigned long long elementAlignment;
@property (nonatomic, readonly) unsigned long long elementPosition;
@property (nonatomic, readonly) struct UIEdgeInsets elementPadding;
@property (nonatomic, readonly) struct UIEdgeInsets elementMargin;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) NSString *columnType;
@property (nonatomic, readonly) NSString *columnItemType;
@property (nonatomic, readonly) NSString *rowHeight;
@property (nonatomic, readonly) NSString *maxWidth;
@property (nonatomic, readonly) NSString *itemWidth;
@property (nonatomic, readonly) NSString *itemHeight;
@property (nonatomic, readonly) IKColor *imageMaskColor;
@property (nonatomic, readonly) NSURL *imagePlaceholderURL;
@property (nonatomic, readonly) IKColor *imagePlaceholderBackgroundColor;
@property (nonatomic, readonly) long long reflectImage;
@property (nonatomic, readonly) long long fillImage;
@property (nonatomic, readonly) unsigned long long imagePosition;
@property (nonatomic, readonly) NSString *imageTreatment;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) NSString *transition;
@property (nonatomic, readonly) NSNumber *transitionInterval;
@property (nonatomic, readonly) NSString *labelsState;
@property (nonatomic, readonly) unsigned long long ordinalMaxLength;
@property (nonatomic, readonly) NSString *lockupType;
@property (nonatomic, readonly) NSString *visibility;
@property (nonatomic, readonly) NSString *cardType;
@property (nonatomic, readonly) NSString *textScale;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) IKFourTuple *borderRadius;
@property (nonatomic, readonly) NSShadow *textShadow;
@property (nonatomic, readonly) NSString *maxHeight;
@property (nonatomic, readonly) NSNumber *letterSpacing;
@property (nonatomic, readonly) NSNumber *lineHeight;

+ (void)initialize;
+ (id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(_Bool)arg3;
+ (id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2;
+ (id)normalizeClassSelectorString:(id)arg1;
+ (void)unregisterStyles;
+ (id)registeredAliases;
+ (_Bool)isHiddenStyleRegistered;
+ (void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(_Bool)arg3;
+ (void)registerEdgeInsetStyle:(id)arg1 aliasName:(id)arg2 withPositionStyleNames:(id)arg3 inherited:(_Bool)arg4;
+ (void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned long long)arg3 inherited:(_Bool)arg4;
+ (id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(_Bool)arg3 inlineStyleRangeCorrect:(_Bool)arg4;
+ (unsigned long long)alignmentFromString:(id)arg1;
+ (unsigned long long)positionFromString:(id)arg1;
+ (id)propertiesForStyleName:(id)arg1;
+ (id)registeredStyles;
+ (void)addBlockedStyle:(id)arg1;
+ (void)clearBlockedStyles;
+ (void)registerHiddenStyle:(id)arg1;
+ (unsigned long long)transitionFromString:(id)arg1;
+ (unsigned long long)imageTreatmentFromString:(id)arg1;
+ (id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(_Bool)arg3;
+ (id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)prototype;
- (id)initWithCSSRule:(id)arg1 filterBlockedStyles:(_Bool)arg2 selStr:(id)arg3;
- (id)initWithClassSelector:(id)arg1;
- (void)_addElementStyle:(id)arg1;
- (void)_addParentStyle:(id)arg1;
- (void)_addDeclaration:(id)arg1;
- (id)_styleNameForAlias:(id)arg1;
- (id)cssValueForStyle:(id)arg1;
- (id)_declarationForStyleName:(id)arg1 expectedClass:(Class)arg2;
- (struct UIEdgeInsets)_edgeInsetsForStyleName:(id)arg1;
- (id)valueForStyle:(id)arg1;
- (id)_newColorFromString:(id)arg1;
- (id)_gradientFromString:(id)arg1;
- (unsigned long long)typeForStyle:(id)arg1;
- (id)initWithStyle:(id)arg1 classSelector:(id)arg2;
- (unsigned long long)edgeFlagForStyle:(id)arg1;
- (_Bool)requiresDynamicEvaluation;

@end
