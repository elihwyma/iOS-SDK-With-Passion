/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView;

@interface GKRatingView : UIView

{
    double _value;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    NSLayoutConstraint *_foregroundWidthConstraint;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *foregroundImageView;
@property (retain, nonatomic) NSLayoutConstraint *foregroundWidthConstraint;
@property (nonatomic) double value;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)commonSetup;

@end
