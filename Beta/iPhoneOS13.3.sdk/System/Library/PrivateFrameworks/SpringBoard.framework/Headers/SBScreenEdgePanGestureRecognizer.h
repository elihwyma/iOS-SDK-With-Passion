/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer

{
    double _grabberActiveZoneWidth;
}

@property (nonatomic) double grabberActiveZoneWidth;
@property (weak, nonatomic) id <SBSystemGestureRecognizerDelegate> delegate;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (long long)_touchInterfaceOrientation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;
- (_Bool)isLocationWithinGrabberActiveZone;

@end
