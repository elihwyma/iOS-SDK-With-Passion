/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <Swift>

{
    int innerShadowBlendMode;
    int outerShadowBlendMode;
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    double embossSize;
    UIColor *innerShadowColor;
    double innerShadowBlur;
    UIColor *outerShadowColor;
    double outerShadowBlur;
    UIColor *topGradientColor;
    UIColor *bottomGradientColor;
    double innerOpacity;
    struct CGPoint innerShadowOffset;
    struct CGPoint outerShadowOffset;
}

@property (retain, nonatomic) UIColor *embossHighlightColor;
@property (retain, nonatomic) UIColor *embossShadowColor;
@property (nonatomic) double embossSize;
@property (retain, nonatomic) UIColor *innerShadowColor;
@property (nonatomic) struct CGPoint innerShadowOffset;
@property (nonatomic) double innerShadowBlur;
@property (nonatomic) int innerShadowBlendMode;
@property (retain, nonatomic) UIColor *outerShadowColor;
@property (nonatomic) struct CGPoint outerShadowOffset;
@property (nonatomic) double outerShadowBlur;
@property (nonatomic) int outerShadowBlendMode;
@property (retain, nonatomic) UIColor *topGradientColor;
@property (retain, nonatomic) UIColor *bottomGradientColor;
@property (nonatomic) double innerOpacity;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;

+ (id)old2xLetterpressStyle;
+ (id)defaultLetterpressStyle;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
