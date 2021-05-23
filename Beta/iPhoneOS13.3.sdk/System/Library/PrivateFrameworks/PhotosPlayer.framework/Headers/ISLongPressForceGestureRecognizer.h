/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface ISLongPressForceGestureRecognizer : UILongPressGestureRecognizer

{
    NSMutableSet *_trackingTouches;
    _Bool _longPressDidBeginForCurrentTouch;
    double _minimumPressure;
    double _maximumPressure;
    double _is_force;
}

@property (nonatomic) double minimumPressure;
@property (nonatomic) double maximumPressure;
@property (nonatomic, readonly) double is_force;

- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_updateForce;

@end
