/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface CNRepeatingGradientSeparatorView : UIView

{
    UIColor *_startColor;
    UIColor *_endColor;
    long long _lineCount;
}

@property (nonatomic, readonly) NSArray *gradientColors;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) long long lineCount;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateGradients;

@end
