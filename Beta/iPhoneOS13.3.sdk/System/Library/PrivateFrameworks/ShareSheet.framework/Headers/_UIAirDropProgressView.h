/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIAirDropProgressView : UIView

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) _Bool showProgressTray;
@property (nonatomic) double progress;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (double)progressPresentationValue;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;

@end
