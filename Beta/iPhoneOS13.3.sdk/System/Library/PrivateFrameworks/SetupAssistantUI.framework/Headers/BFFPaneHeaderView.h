/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel;

@interface BFFPaneHeaderView : UIView

{
    struct CGSize _iconSize;
    UIButton *_linkButton;
    CDUnknownBlockType _linkHandler;
    UIView *_bottomLine;
    _Bool _iconInheritsTint;
    _Bool _useMinimumTopPadding;
    _Bool _textLabelAlignedByLastBaseline;
    UIImageView *_iconView;
    UIImage *_icon;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UILabel *_subLabel;
    double _flexibleHeight;
    double _customTopPadding;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize iconSize;
@property (retain, nonatomic) NSString *iconAccessibilityLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic) double flexibleHeight;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (nonatomic) _Bool iconInheritsTint;
@property (nonatomic) _Bool useMinimumTopPadding;
@property (nonatomic) double customTopPadding;
@property (nonatomic, getter=isTextLabelAlignedByLastBaseline) _Bool textLabelAlignedByLastBaseline;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setTitleText:(id)arg1;
- (void)_linkButtonPressed;
- (double)_labelsAndLinksBaselineOffsetForView:(id)arg1;
- (double)heightForWidth:(double)arg1 inView:(id)arg2;
- (void)setLinkText:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
