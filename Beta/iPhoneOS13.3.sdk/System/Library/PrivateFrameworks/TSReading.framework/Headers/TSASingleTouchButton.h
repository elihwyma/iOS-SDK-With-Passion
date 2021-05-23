/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton

{
    UIImage *_touchImage;
    _Bool _showsTouchOnTopWhenHighlighted;
}

@property (nonatomic) _Bool showsTouchOnTopWhenHighlighted;
@property (retain, nonatomic) UIImage *touchImage;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)_pressFeedbackPosition;
- (id)_pressFeedbackImage;

@end
