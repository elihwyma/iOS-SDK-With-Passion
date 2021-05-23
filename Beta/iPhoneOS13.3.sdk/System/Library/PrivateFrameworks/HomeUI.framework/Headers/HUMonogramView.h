/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UIFont, UILabel;

@interface HUMonogramView : UIView

{
    _Bool _needsComputeLayoutMetrics;
    UILabel *_monogramLabel;
    UIView *_backgroundView;
    unsigned long long _style;
    NSArray *_labelLayoutConstraints;
    struct UIEdgeInsets _bubbleEdgeOutsets;
}

@property (nonatomic, readonly) UILabel *monogramLabel;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool needsComputeLayoutMetrics;
@property (nonatomic) struct UIEdgeInsets bubbleEdgeOutsets;
@property (copy, nonatomic) NSArray *labelLayoutConstraints;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *monogramString;

+ (unsigned long long)desiredStyleForString:(id)arg1;

- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_setupBackgroundView:(struct CGRect)arg1;
- (void)_setupMonogramLabel:(struct CGRect)arg1;
- (void)setNeedsComputeLayoutMetrics;
- (void)_computeLayoutMetrics;

@end
