/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIButton.h>

@class UIView;

@interface _TVRMAlertButton : UIButton

{
    _Bool _showingBackgroundEffect;
    UIView *_burnView;
    UIView *_plusDView;
}

@property (nonatomic) _Bool showingBackgroundEffect;
@property (retain, nonatomic) UIView *burnView;
@property (retain, nonatomic) UIView *plusDView;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
