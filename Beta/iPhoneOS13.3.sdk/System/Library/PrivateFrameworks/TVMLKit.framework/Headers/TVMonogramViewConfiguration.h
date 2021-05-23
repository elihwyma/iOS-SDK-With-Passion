/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface TVMonogramViewConfiguration : NSObject

{
    long long _style;
    double _focusedSizeIncrease;
    UIColor *_unfocusedBgColor;
    UIColor *_focusedBgColor;
    double _unfocusedShadowAlpha;
    double _focusedShadowAlpha;
    UIImage *_unfocusedShadowImage;
    UIImage *_focusedShadowImage;
    NSString *_titleTextStyle;
    UIColor *_titleUnfocusedColor;
    UIColor *_titleFocusedColor;
    NSString *_subtitleTextStyle;
    UIColor *_subtitleUnfocusedColor;
    UIColor *_subtitleFocusedColor;
}

@property (nonatomic) long long style;
@property (nonatomic) double focusedSizeIncrease;
@property (retain, nonatomic) UIColor *unfocusedBgColor;
@property (retain, nonatomic) UIColor *focusedBgColor;
@property (nonatomic, readonly) double unfocusedImageAlpha;
@property (nonatomic) double unfocusedShadowAlpha;
@property (nonatomic) double focusedShadowAlpha;
@property (retain, nonatomic) UIImage *unfocusedShadowImage;
@property (retain, nonatomic) UIImage *focusedShadowImage;
@property (copy, nonatomic) NSString *titleTextStyle;
@property (retain, nonatomic) UIColor *titleUnfocusedColor;
@property (retain, nonatomic) UIColor *titleFocusedColor;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (retain, nonatomic) UIColor *subtitleUnfocusedColor;
@property (retain, nonatomic) UIColor *subtitleFocusedColor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithShadowImages:(_Bool)arg1;

@end
