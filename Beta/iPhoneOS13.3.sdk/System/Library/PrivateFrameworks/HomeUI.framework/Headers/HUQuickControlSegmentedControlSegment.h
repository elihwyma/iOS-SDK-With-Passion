/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface HUQuickControlSegmentedControlSegment : UIView

{
    _Bool _highlighted;
    _Bool _selected;
    unsigned long long _roundedCorners;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) unsigned long long roundedCorners;

+ (id)highlightedColor;
+ (id)selectedColor;
+ (double)borderInset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateBackgroundColor;
- (void)_setupConstraints;

@end
