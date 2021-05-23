/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIButton.h>

@interface TSKBiggerButton : UIButton

{
    _Bool mHitTestWithOutsets;
    struct UIEdgeInsets mOutsets;
}

+ (id)tsdPlatformButtonWithFrame:(struct CGRect)arg1;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHitBufferTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;

@end
