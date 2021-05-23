/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIView.h>

@class ASVBlurredBackgroundView, NSLayoutConstraint, NSString, UILabel;

@interface ASVTrackingStateStatusLabel : UIView

{
    long long _controlStyle;
    UILabel *_label;
    ASVBlurredBackgroundView *_blurredBackgroundView;
    NSLayoutConstraint *_viewWidthConstraint;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView;
@property (retain, nonatomic) NSLayoutConstraint *viewWidthConstraint;
@property (nonatomic) long long controlStyle;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect)arg1 controlStyle:(long long)arg2;

@end
