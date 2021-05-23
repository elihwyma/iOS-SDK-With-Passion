/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface SBSimplePasscodeEntryFieldButton : UIView

{
    _Bool _useLightStyle;
    _Bool _revealed;
    struct UIEdgeInsets _paddingOutsideRing;
    UIColor *_color;
    UIView *_ringView;
}

- (void)layoutSubviews;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 paddingOutsideRing:(struct UIEdgeInsets)arg2 useLightStyle:(_Bool)arg3;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;

@end
