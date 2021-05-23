/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface LPHighlightGestureRecognizer : UIGestureRecognizer

{
    struct CGPoint _startPointInWindowCoordinates;
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)_locationInWindow;
- (void)startHighlightIfPossible;
- (void)updateHighlight;
- (void)cancelHighlight;

@end
