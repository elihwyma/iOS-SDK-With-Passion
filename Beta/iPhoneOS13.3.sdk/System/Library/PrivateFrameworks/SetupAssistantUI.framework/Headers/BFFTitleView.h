/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIScrollView.h>

@class UILabel;

@interface BFFTitleView : UIScrollView

{
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;

- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)contentBounds;

@end
