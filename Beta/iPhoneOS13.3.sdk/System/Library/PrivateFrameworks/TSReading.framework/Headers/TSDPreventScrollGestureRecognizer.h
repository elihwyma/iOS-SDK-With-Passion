/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIGestureRecognizer.h>

@class TSDInteractiveCanvasController, UITouch;

@interface TSDPreventScrollGestureRecognizer : UIGestureRecognizer

{
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    UITouch *mSecondTouch;
}

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end
