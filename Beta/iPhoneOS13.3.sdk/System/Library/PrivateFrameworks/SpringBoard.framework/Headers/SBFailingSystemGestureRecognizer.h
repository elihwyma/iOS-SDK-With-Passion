/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id <SBSystemGestureRecognizerDelegate> delegate;

- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
