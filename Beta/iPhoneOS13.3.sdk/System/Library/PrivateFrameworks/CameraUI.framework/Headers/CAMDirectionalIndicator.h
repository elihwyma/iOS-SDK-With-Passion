/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl

{
    unsigned long long _direction;
}

@property (nonatomic, readonly) CAShapeLayer *_arrowLayer;
@property (nonatomic) unsigned long long direction;

+ (Class)layerClass;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setDirection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateArrowShapeAnimated:(_Bool)arg1;

@end
