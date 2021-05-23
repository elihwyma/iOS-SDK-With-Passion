/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressView : UIView

@property (nonatomic) long long progressStartPoint;
@property (nonatomic, readonly) UIColor *progressColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) _Bool showProgressTray;
@property (nonatomic) double progress;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setProgressColor:(id)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (double)progressPresentationValue;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;

@end
