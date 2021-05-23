/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAnimation.h>

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation

{
    struct CGPoint _originalOffset;
    struct CGPoint _targetOffset;
    _Bool _targetOffsetValidAtStart;
    double _accuracy;
    _Bool _adjustsForContentOffsetDelta;
    CABasicAnimation *_customAnimation;
}

- (void)dealloc;
- (void)setProgress:(float)arg1;
- (float)progressForFraction:(float)arg1;
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;

@end
