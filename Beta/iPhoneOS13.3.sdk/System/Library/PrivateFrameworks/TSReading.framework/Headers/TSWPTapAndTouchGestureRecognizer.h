/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSString, TSDRep;

@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSWPTapAndTouchGestureRecognizer : UIGestureRecognizer

{
    unsigned long long _numberOfTapsRequired;
}

@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property (nonatomic) id <TSDGestureDelegate> gestureDelegate;
@property (retain, nonatomic) NSString *gestureKind;
@property (retain, nonatomic) TSDRep *targetRep;
@property (nonatomic, readonly) int gestureState;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)p_failBecauseFingerStayedUpTooLongAfterTap;

@end
