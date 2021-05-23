/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIButton.h>

@interface UIButton (PXCMM)

+ (id)px_actionButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 color:(id)arg4;
+ (id)buttonBackgroundImageForType:(unsigned long long)arg1 color:(id)arg2 cornerRadius:(double)arg3 controlState:(unsigned long long)arg4;
+ (id)buttonWithPXType:(unsigned long long)arg1 color:(id)arg2;

- (void)px_updateTitleUsingBlock:(CDUnknownBlockType)arg1;
- (void)px_setTitle:(id)arg1 orAttributedTitle:(id)arg2 forState:(unsigned long long)arg3;

@end
