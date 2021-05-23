/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkGestureRecognizer : UIGestureRecognizer

{
    UITouch *_firstTouch;
    double _startTime;
    struct CGPoint _startLocation;
}

@property (retain, nonatomic) UITouch *firstTouch;
@property (nonatomic) struct CGPoint startLocation;
@property (nonatomic) double startTime;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)_hasActiveTouchesInEvent:(id)arg1;

@end
