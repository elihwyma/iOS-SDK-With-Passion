/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UIPinchGestureRecognizer.h>

@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer

{
    double _lastScale;
    unsigned long long _currentType;
    id _target;
    SEL _action;
    unsigned long long _gestureType;
}

@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long gestureType;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)shouldCompleteGesture;
- (void)handle:(id)arg1;

@end
