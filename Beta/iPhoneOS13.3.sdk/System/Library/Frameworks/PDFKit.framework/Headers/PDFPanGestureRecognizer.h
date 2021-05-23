/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface PDFPanGestureRecognizer : UIPanGestureRecognizer

{
    _Bool _didForcePress;
    _Bool _touchesDidHavePressure;
    struct CGPoint _locationOfFirstTouch;
}

@property (nonatomic) struct CGPoint locationOfFirstTouch;
@property (nonatomic) _Bool didForcePress;
@property (nonatomic) _Bool touchesDidHavePressure;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;

@end
