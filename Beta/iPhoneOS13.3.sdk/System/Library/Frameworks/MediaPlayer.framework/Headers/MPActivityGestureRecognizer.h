/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIGestureRecognizer.h>

@interface MPActivityGestureRecognizer : UIGestureRecognizer

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_touchesTerminated:(id)arg1 withEvent:(id)arg2;
- (void)_reportOngoingActivity;
- (void)_stopReportingOngoingActivity;

@end
