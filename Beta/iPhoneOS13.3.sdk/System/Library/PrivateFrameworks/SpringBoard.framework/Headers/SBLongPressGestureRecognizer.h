/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBClickGestureRecognizer.h>

@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer

{
    _Bool _firstEventAfterClicksWasReceived;
    double _minimumPressDuration;
}

@property (nonatomic) unsigned long long numberOfClicksRequired;
@property (nonatomic) double minimumPressDuration;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;

@end
