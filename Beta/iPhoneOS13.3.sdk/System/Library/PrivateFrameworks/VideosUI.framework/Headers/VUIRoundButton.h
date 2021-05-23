/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImage, UIStackView;

@protocol VUIRoundButtonDelegate;

@interface VUIRoundButton : UIView

{
    UIImage *_buttonImage;
    NSArray *_textLabels;
    id <VUIRoundButtonDelegate> _delegate;
    UIButton *_button;
    UIStackView *_textLabelStackView;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIStackView *textLabelStackView;
@property (retain, nonatomic) UIImage *buttonImage;
@property (retain, nonatomic) NSArray *textLabels;
@property (weak, nonatomic) id <VUIRoundButtonDelegate> delegate;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)buttonPressed:(id)arg1;
- (void)buttonSelected:(id)arg1;
- (void)_setUpViews;
- (void)configureTextStackView;
- (void)buttonReleased:(id)arg1;

@end
