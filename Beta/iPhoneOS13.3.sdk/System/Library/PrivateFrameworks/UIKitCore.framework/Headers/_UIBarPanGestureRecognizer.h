/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer

{
    long long _barAction;
    double _bias;
}

@property (nonatomic, readonly) long long barAction;
@property (nonatomic, readonly) double bias;

- (id)description;
- (void)setDelegate:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;

@end
