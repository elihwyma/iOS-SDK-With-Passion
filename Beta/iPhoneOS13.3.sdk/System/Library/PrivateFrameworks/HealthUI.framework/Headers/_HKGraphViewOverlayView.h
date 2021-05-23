/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIImageView.h>

@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView

{
    UIGraphicsImageRenderer *_imageRenderer;
}

@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawContentUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateRendererSize:(struct CGSize)arg1;

@end
