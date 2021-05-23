/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CAMZoomControlButtonMaskView : UIView

{
    CAShapeLayer *__shapeLayer;
    struct CGRect _maskOvalFrame;
}

@property (nonatomic, readonly) CAShapeLayer *_shapeLayer;
@property (nonatomic) struct CGRect maskOvalFrame;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
