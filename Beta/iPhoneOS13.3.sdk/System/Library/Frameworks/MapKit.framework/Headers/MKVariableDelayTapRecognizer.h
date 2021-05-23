/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer

{
    double originalMaximumIntervalBetweenSuccessiveTaps;
    id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;
}

@property (weak, nonatomic) id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
