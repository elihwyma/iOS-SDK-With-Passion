/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIControl.h>

@class MPAVRoute, MPRouteLabel, NSString, UIColor, UIFont, UIImage, UIImageView;

@interface MPRouteButton : UIControl

{
    MPRouteLabel *_routeLabel;
    UIImageView *_accessoryImageView;
    double _alphaOverride;
    _Bool _routeLabelHidden;
    _Bool _forcesUppercaseText;
    double _accessoryImageSpacing;
    UIFont *_font;
    MPAVRoute *_route;
    NSString *_routeTitle;
    UIColor *_overrideColor;
    struct UIEdgeInsets _hitRectInsets;
}

@property (retain, nonatomic) UIImage *accessoryImage;
@property (nonatomic) double accessoryImageSpacing;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (retain, nonatomic) MPAVRoute *route;
@property (copy, nonatomic, readonly) NSString *routeTitle;
@property (nonatomic, getter=isRouteLabelHidden) _Bool routeLabelHidden;
@property (nonatomic) _Bool forcesUppercaseText;
@property (retain, nonatomic) UIColor *overrideColor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;

@end
