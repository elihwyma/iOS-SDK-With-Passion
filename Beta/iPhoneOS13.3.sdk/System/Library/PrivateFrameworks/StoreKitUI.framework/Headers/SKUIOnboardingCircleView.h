/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingCircleView : UIView

{
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets _edgeInsets;
    double _minimumDiameter;
    UIColor *_fillColor;
    UILabel *_titleLabel;
    long long _titlePosition;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (copy, nonatomic) UIColor *fillColor;
@property (nonatomic) double minimumDiameter;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) long long titlePosition;

- (id)description;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundImageAlpha:(double)arg1;

@end
