/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation

{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    int _fieldsToChange;
}

- (id)initWithTarget:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setStartFrame:(struct CGRect)arg1;
- (void)setEndFrame:(struct CGRect)arg1;
- (struct CGRect)endFrame;
- (void)setSignificantRectFields:(int)arg1;

@end
