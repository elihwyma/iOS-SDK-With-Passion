/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;

@interface SBNumberPadWithDelegate : TPNumberPad

{
    id <SBNumberPadDelegate> _delegate;
}

@property (weak, nonatomic) id <SBNumberPadDelegate> delegate;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)buttonForPoint:(struct CGPoint)arg1 forEvent:(id)arg2;
- (void)buttonCancelled:(id)arg1;

@end
