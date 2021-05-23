/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBTextStyle;

__attribute__((visibility("hidden")))
@interface UIKBRenderTraits : NSObject <Swift>

{
    NSMutableArray *_renderEffects;
    NSMutableArray *_foregroundRenderEffects;
    _Bool _honorControlOpacity;
    _Bool _controlOpacities;
    _Bool _blurBlending;
    _Bool _renderSecondarySymbolsSeparately;
    UIKBRenderGeometry *_geometry;
    UIKBGradient *_backgroundGradient;
    UIKBGradient *_layeredBackgroundGradient;
    UIKBGradient *_layeredForegroundGradient;
    UIKBTextStyle *_symbolStyle;
    UIKBTextStyle *_fallbackSymbolStyle;
    NSArray *_secondarySymbolStyles;
    NSArray *_variantGeometries;
    UIKBRenderTraits *_variantTraits;
    UIKBRenderTraits *_highlightedVariantTraits;
    long long _blendForm;
    NSArray *_renderFlags;
    long long _renderFlagsForAboveEffects;
    NSString *_hashString;
}

@property (retain, nonatomic) UIKBRenderGeometry *geometry;
@property (retain, nonatomic) UIKBGradient *backgroundGradient;
@property (retain, nonatomic) UIKBGradient *layeredBackgroundGradient;
@property (retain, nonatomic) UIKBGradient *layeredForegroundGradient;
@property (retain, nonatomic) UIKBTextStyle *symbolStyle;
@property (retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle;
@property (retain, nonatomic) NSArray *secondarySymbolStyles;
@property (nonatomic, readonly) NSArray *renderEffects;
@property (nonatomic, readonly) NSArray *foregroundRenderEffects;
@property (retain, nonatomic) NSArray *variantGeometries;
@property (retain, nonatomic) UIKBRenderTraits *variantTraits;
@property (retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits;
@property (nonatomic) _Bool controlOpacities;
@property (nonatomic) _Bool blurBlending;
@property (nonatomic) long long blendForm;
@property (retain, nonatomic) NSArray *renderFlags;
@property (nonatomic) _Bool renderSecondarySymbolsSeparately;
@property (nonatomic) long long renderFlagsForAboveEffects;
@property (retain, nonatomic) NSString *hashString;

+ (id)traitsWithGeometry:(id)arg1;
+ (id)emptyTraits;
+ (id)traitsWithSymbolStyle:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addRenderEffect:(id)arg1;
- (void)modifyForMasking;
- (void)overlayWithTraits:(id)arg1;
- (void)removeAllRenderEffects;
- (void)addForegroundRenderEffect:(id)arg1;

@end
