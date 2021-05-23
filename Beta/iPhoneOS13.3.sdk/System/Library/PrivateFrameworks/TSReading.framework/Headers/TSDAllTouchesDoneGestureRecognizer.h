/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

@interface TSDAllTouchesDoneGestureRecognizer : UIGestureRecognizer

{
    NSMutableSet *mTouches;
}

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)p_touchesEndedOrCancelled:(id)arg1;

@end
