/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIButton.h>

@class UIColor;

@interface WGColorHighlightButton : UIButton

{
    UIColor *_savedBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property (retain, nonatomic) UIColor *savedBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateRealBackgroundColor;

@end
