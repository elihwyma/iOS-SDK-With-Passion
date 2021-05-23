/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class CABasicAnimation;

@interface DOCIndeterminateProgressRingView : UIView

{
    CABasicAnimation *_spinnerAnimation;
}

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)_updateShapePath;

@end
