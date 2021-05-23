/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMSubjectIndicatorView : UIView

{
    UIImageView *__imageView;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, getter=isInactive) _Bool inactive;
@property (nonatomic, getter=isPulsing) _Bool pulsing;

+ (struct CGSize)fixedSize;
+ (struct CGSize)_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize)arg1;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 timingFunction:(id)arg4;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
- (void)stopScalingWithDuration:(double)arg1;

@end
