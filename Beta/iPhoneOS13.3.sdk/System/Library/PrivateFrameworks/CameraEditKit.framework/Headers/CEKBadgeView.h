/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIView.h>

@class UIColor;

@protocol CEKBadgeViewDelegate;

@interface CEKBadgeView : UIView

{
    id <CEKBadgeViewDelegate> _delegate;
    double __fillCornerRadius;
    UIColor *__fillColor;
    UIColor *__contentColor;
}

@property (nonatomic, setter=_setFillCornerRadius:) double _fillCornerRadius;
@property (retain, nonatomic, setter=_setFillColor:) UIColor *_fillColor;
@property (retain, nonatomic, setter=_setContentColor:) UIColor *_contentColor;
@property (weak, nonatomic) id <CEKBadgeViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_maskImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)_invertMaskImage:(id)arg1;

@end
