/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface SBHomeScreenMaterialView : UIView

{
    UIView *_backgroundView;
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    struct CGPoint _wallpaperRelativeCenter;
    _Bool _highlighted;
    struct UIEdgeInsets _backgroundInsets;
}

@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets backgroundInsets;

+ (id)colorBurnContentImageForImage:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLegibilityStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundView:(id)arg2 foregroundImage:(id)arg3;
- (void)_addHighlightViewIfNecessary;

@end
