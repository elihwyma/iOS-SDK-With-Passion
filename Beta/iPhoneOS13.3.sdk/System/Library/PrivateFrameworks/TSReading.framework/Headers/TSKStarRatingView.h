/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIControl.h>

@class TSKHorizontalDragRecognizer, TSUColor;

@interface TSKStarRatingView : UIControl

{
    long long mRating;
    long long mRatingOnFingerDown;
    int mStyle;
    TSKHorizontalDragRecognizer *mDragGesture;
    _Bool mShowsDots;
    TSUColor *mColor;
}

@property (nonatomic) long long value;
@property (nonatomic) int style;
@property (nonatomic) _Bool showsDots;
@property (copy, nonatomic) TSUColor *color;

+ (struct CGPath *)newStarPath:(double)arg1;
+ (void)renderRating:(long long)arg1 intoContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 style:(int)arg4 showDots:(_Bool)arg5;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (Class)renderClass;
- (void)p_horizontalDrag:(id)arg1;
- (void)p_tapped:(id)arg1;
- (void)p_setupGestureRecognizers;
- (long long)p_starRatingForLocation:(double)arg1;
- (long long)p_starRatingForGesture:(id)arg1;

@end
