/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <NotificationCenter/NCSizeObservingView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NCWidgetViewControllerView : NCSizeObservingView

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool delaysContentTouches;
@property (nonatomic, readonly, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection;
@property (nonatomic, readonly, getter=_scrollHysteresis) double scrollHysteresis;
@property (nonatomic, readonly, getter=_canScrollX) _Bool canScrollX;
@property (nonatomic, readonly, getter=_canScrollY) _Bool canScrollY;

- (void)didMoveToWindow;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;

@end
