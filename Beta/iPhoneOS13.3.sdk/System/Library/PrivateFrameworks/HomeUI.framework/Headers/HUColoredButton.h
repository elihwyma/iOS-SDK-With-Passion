/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIButton.h>

@interface HUColoredButton : UIButton

{
    _Bool _backgroundColorFollowsTintColor;
    double _highlightedAlpha;
    double _highlightedTextAlpha;
}

@property (nonatomic) double highlightedAlpha;
@property (nonatomic) double highlightedTextAlpha;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool backgroundColorFollowsTintColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;

@end
