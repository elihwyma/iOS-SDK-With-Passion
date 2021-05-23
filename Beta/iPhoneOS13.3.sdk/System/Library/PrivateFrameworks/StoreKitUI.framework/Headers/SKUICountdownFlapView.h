/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIImageView.h>

@class NSString, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUICountdownFlapView : UIImageView

{
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    double _factor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
    long long _position;
    NSString *_string;
    UIColor *_textColor;
}

@property (nonatomic, readonly) long long position;
@property (nonatomic, readonly) UIColor *flapTopColor;
@property (nonatomic, readonly) UIColor *flapBottomColor;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *textColor;

- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_newLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithPosition:(long long)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3;
- (id)_newBackgroundImageForTop:(int)arg1;
- (struct CATransform3D)_transformForAngle:(double)arg1 isTop:(_Bool)arg2;

@end
