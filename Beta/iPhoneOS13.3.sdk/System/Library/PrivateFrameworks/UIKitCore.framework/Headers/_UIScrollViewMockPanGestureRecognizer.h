/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScrollViewPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPanGestureRecognizer : NSObject

{
    struct CGPoint _translation;
    struct CGPoint _velocity;
    long long _state;
    UIScrollViewPanGestureRecognizer *_gestureRecognizer;
}

@property (retain, nonatomic) UIScrollViewPanGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)simulateTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;

@end
