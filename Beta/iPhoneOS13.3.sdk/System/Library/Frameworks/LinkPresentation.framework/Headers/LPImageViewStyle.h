/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPPadding, LPPointUnit, LPShadowStyle, LPSize, UIColor;

__attribute__((visibility("hidden")))
@interface LPImageViewStyle : NSObject

{
    _Bool _requireFixedSize;
    _Bool _allowsPlatterPresentation;
    LPSize *_fixedSize;
    LPSize *_minimumSize;
    LPPointUnit *_fixedFallbackImageSize;
    LPPadding *_margin;
    LPPadding *_padding;
    long long _scalingMode;
    long long _filter;
    long long _verticalAlignment;
    LPShadowStyle *_shadow;
    UIColor *_maskColor;
    UIColor *_backgroundColor;
    LPPointUnit *_backgroundInset;
    LPPointUnit *_cornerRadius;
    double _darkeningAmount;
}

@property (retain, nonatomic) LPSize *fixedSize;
@property (nonatomic) _Bool requireFixedSize;
@property (retain, nonatomic) LPSize *minimumSize;
@property (retain, nonatomic) LPPointUnit *fixedFallbackImageSize;
@property (retain, nonatomic, readonly) LPPadding *margin;
@property (retain, nonatomic, readonly) LPPadding *padding;
@property (nonatomic) long long scalingMode;
@property (nonatomic) long long filter;
@property (nonatomic) long long verticalAlignment;
@property (retain, nonatomic) LPShadowStyle *shadow;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) _Bool allowsPlatterPresentation;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) LPPointUnit *backgroundInset;
@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (nonatomic) double darkeningAmount;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)emailCompatibleMargin;

@end
