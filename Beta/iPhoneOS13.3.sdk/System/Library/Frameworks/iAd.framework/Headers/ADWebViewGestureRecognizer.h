/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIGestureRecognizer.h>

@interface ADWebViewGestureRecognizer : UIGestureRecognizer

{
    _Bool _shouldBlockNavigation;
    _Bool _pointIsInsideView;
    long long _lastTrackedTouch;
    double _mostRecentTapTimestamp;
    struct CGPoint _mostRecentTapLocation;
    struct CGPoint _location;
}

@property (nonatomic) long long lastTrackedTouch;
@property (nonatomic) double mostRecentTapTimestamp;
@property (nonatomic, readonly) struct CGPoint location;
@property (nonatomic, readonly) _Bool pointIsInsideView;
@property (nonatomic, readonly) _Bool shouldBlockNavigation;
@property (nonatomic, readonly) struct CGPoint mostRecentTapLocation;
@property (nonatomic, readonly) _Bool wasViewTappedRecently;

- (void)reset;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;

@end
