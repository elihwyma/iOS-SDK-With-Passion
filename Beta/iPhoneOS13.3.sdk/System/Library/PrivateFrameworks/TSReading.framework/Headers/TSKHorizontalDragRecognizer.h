/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer

{
    struct CGPoint mStartPoint;
    UIScrollView *mContainingScrollView;
}

@property (nonatomic) UIScrollView *containingScrollView;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;

@end
