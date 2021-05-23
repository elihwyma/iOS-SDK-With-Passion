/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class PLPlatterView, SBIconImageView, UILabel;

@interface SBSceneViewAppIconView : UIView

{
    SBIconImageView *_imageView;
    UILabel *_label;
    PLPlatterView *_shadowView;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) PLPlatterView *shadowView;
@property (nonatomic, readonly) SBIconImageView *imageView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithIcon:(id)arg1;

@end
