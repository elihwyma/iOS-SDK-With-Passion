/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewLayout.h>

@class IKColor, IKFourTuple, NSShadow, NSString, UIColor, UIImageSymbolConfiguration;

@interface TVImageLayout : TVViewLayout

{
    _Bool _continuousBorder;
    _Bool _allowsNonOpaqueShadows;
    _Bool _useInSearchPartial;
    double _upscaleFactor;
    double _aspectRatio;
    long long _scaleMode;
    UIColor *_borderColor;
    IKColor *_ikTintColor;
    IKColor *_ikDarkTintColor;
    NSShadow *_shadow;
    NSString *_placeholderArtworkName;
    NSString *_cropCode;
    UIImageSymbolConfiguration *_imageSymbolConfiguration;
    NSString *_imageTreatment;
    IKFourTuple *_ikBorderRadius;
    NSString *_inlineTitle;
    struct CGSize _imageSize;
    struct TVCornerRadii _borderRadii;
    struct UIEdgeInsets _borderWidth;
}

@property (copy, nonatomic) NSString *imageTreatment;
@property (retain, nonatomic) IKFourTuple *ikBorderRadius;
@property (copy, nonatomic) NSString *inlineTitle;
@property (nonatomic) _Bool allowsNonOpaqueShadows;
@property (nonatomic) _Bool useInSearchPartial;
@property (nonatomic, readonly) struct CGSize decoratorSize;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) double upscaleFactor;
@property (nonatomic) double aspectRatio;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct TVCornerRadii borderRadii;
@property (nonatomic) struct UIEdgeInsets borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) _Bool continuousBorder;
@property (retain, nonatomic) IKColor *ikTintColor;
@property (retain, nonatomic) IKColor *ikDarkTintColor;
@property (retain, nonatomic) NSShadow *shadow;
@property (copy, nonatomic) NSString *placeholderArtworkName;
@property (copy, nonatomic) NSString *cropCode;
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)focusSizeIncrease;
- (struct CGSize)_aspectFitToSize:(struct CGSize)arg1 scaleToSize:(struct CGSize)arg2 aspectRatio:(double)arg3;

@end
