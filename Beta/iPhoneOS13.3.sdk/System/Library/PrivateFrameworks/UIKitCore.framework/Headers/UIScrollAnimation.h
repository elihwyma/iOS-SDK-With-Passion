/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAnimation.h>

@interface UIScrollAnimation : UIAnimation

{
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void)setProgress:(float)arg1;
- (void)setStartPoint:(struct CGPoint)arg1;
- (void)setEndPoint:(struct CGPoint)arg1;

@end
