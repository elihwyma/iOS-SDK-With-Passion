/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIControl.h>

@class CABackdropLayer, NSString, UIFont, UILabel, UIView;

@interface SBUIPasscodePillButton : UIControl

{
    UILabel *_titleLabel;
    UIView *_pillView;
    UIView *_backdropView;
    CABackdropLayer *_backdropLayer;
    double _unhighlightedAlpha;
    double _highlightedAlpha;
}

@property (nonatomic) double unhighlightedAlpha;
@property (nonatomic) double highlightedAlpha;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *font;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
