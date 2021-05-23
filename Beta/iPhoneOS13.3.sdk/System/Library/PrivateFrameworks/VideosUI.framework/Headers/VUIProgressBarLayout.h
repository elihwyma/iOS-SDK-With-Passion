/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIProgressBarLayout : NSObject

{
    _Bool _shouldProgressBarUseRoundCorner;
    _Bool _useMaterial;
    UIColor *_fillColor;
    UIColor *_tintColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    double _height;
    double _cornerRadius;
    UIVisualEffectView *_materialView;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets margin;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool shouldProgressBarUseRoundCorner;
@property (nonatomic) _Bool useMaterial;
@property (retain, nonatomic) UIVisualEffectView *materialView;

+ (id)defaultProgressBarLayout;

@end
