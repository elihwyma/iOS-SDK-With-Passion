/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@interface CAMLevelCrosshair : UIView

{
    _Bool _highlighted;
}

@property (nonatomic, getter=isHighlighted) _Bool highlighted;

+ (void)_drawCrosshairInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2 strokeWidth:(double)arg3 color:(id)arg4;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_commonCAMLevelCrosshairInitialization;

@end
