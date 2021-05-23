/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class TSUPointerKeyDictionary;

@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer

{
    double mStartTime;
    unsigned long long mTouchCountAttained;
    TSUPointerKeyDictionary *mStartLocations;
    int mDirection;
    unsigned long long mNumberOfTouchesRequired;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) int direction;

- (void)dealloc;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (double)p_angleDifferenceForAngle1:(double)arg1 angle2:(double)arg2;
- (_Bool)p_swipeDirectionValidForAngle:(double)arg1 direction:(int)arg2;
- (_Bool)p_swipeDirectionValidForXDiff:(double)arg1 yDiff:(double)arg2;
- (void)p_recordTouches:(id)arg1;
- (_Bool)p_touchWasSwipe:(id)arg1 movedFarOut:(_Bool *)arg2;

@end
