/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUISeparatorView : UIView

{
    UIColor *_color;
    UIColor *_darkColor;
    double _lineHeight;
    UIView *_line;
}

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *darkColor;
@property (nonatomic) double lineHeight;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)lineColor;
- (void)initializeVUISeparatorView;
- (void)_updateLineColor;

@end
