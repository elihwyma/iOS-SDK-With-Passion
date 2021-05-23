/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIView;

@interface NTKCFaceContainerView : UIControl

{
    _Bool _active;
    long long _style;
    UIView *_faceView;
    UIView *_backgroundView;
    CAShapeLayer *_outline;
    UIView *_faceContainer;
    UIView *_highlightView;
    struct CGSize _faceSize;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAShapeLayer *outline;
@property (retain, nonatomic) UIView *faceContainer;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) struct CGSize faceSize;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *faceView;
@property (nonatomic) _Bool active;

+ (struct CGSize)sizeForFaceSize:(struct CGSize)arg1 style:(long long)arg2;
+ (double)_insetPaddingForStyle:(long long)arg1;
+ (struct CGSize)faceSizeForSize:(struct CGSize)arg1 style:(long long)arg2;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFaceSize:(struct CGSize)arg1 style:(long long)arg2;
- (double)_outlineLineWidth;
- (void)_updateOutlineColor;
- (struct CGAffineTransform)_transformForFaceView;

@end
