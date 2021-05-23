/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDCanvasLayer;

@protocol TSDCanvasZoomTrackerDelegate;

@interface TSDCanvasZoomTracker : NSObject

{
    TSDCanvasLayer *mCanvasLayer;
    NSObject<TSDCanvasZoomTrackerDelegate> *mDelegate;
    _Bool mAlwaysUsesTranslationSprings;
    _Bool mSnapsViewScale;
    _Bool mAnimateTransform;
    struct CGAffineTransform mSavedTransform;
    struct CGPoint mZoomOrigin;
    _Bool mHasGestureOrigin;
    struct CGPoint mGestureOrigin;
    struct CGPoint mGestureOffset;
    struct CGPoint mSavedContentOffset;
    _Bool mIsZooming;
    unsigned long long mZoomVelocitySampleCount;
    double mZoomVelocity;
    double mZoomStartTime;
    _Bool mIsShowingZoomHUD;
}

@property (weak, nonatomic) NSObject<TSDCanvasZoomTrackerDelegate> *delegate;
@property (nonatomic) _Bool alwaysUsesTranslationSprings;
@property (nonatomic) _Bool snapsViewScale;
@property (nonatomic) _Bool animateTransform;

- (id)initWithCanvasLayer:(id)arg1;
- (void)zoomWithScale:(double)arg1 velocity:(double)arg2 locationInView:(struct CGPoint)arg3 phase:(int)arg4;
- (void)p_finishZoomWithFinalScaleFactor:(double)arg1 contentOffset:(struct CGPoint)arg2;

@end
