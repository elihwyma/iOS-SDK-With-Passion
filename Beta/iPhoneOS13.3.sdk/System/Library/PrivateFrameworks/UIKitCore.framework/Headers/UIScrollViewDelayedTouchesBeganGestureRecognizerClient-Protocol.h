/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <Swift>

@property (nonatomic, readonly) _Bool delaysContentTouches;
@property (nonatomic, readonly, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection;
@property (nonatomic, readonly, getter=_scrollHysteresis) double scrollHysteresis;
@property (nonatomic, readonly, getter=_canScrollX) _Bool canScrollX;
@property (nonatomic, readonly, getter=_canScrollY) _Bool canScrollY;

- (unsigned short)touchesShouldBegin:withEvent:inContentView: /* Error: Ran out of types for this method. */;

@end
