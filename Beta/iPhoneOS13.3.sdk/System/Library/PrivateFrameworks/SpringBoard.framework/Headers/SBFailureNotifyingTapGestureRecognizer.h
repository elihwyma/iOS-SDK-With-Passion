/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UITapGestureRecognizer.h>

@protocol SBFailureNotifyingTapGestureRecognizerDelegate;

@interface SBFailureNotifyingTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) id <SBFailureNotifyingTapGestureRecognizerDelegate> delegate;

- (void)setState:(long long)arg1;

@end
