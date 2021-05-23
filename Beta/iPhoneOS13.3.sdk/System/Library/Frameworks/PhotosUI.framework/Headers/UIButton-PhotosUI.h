/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIButton.h>

@interface UIButton (PhotosUI)

- (void)pu_setRTLAwareContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)pu_setTitle:(id)arg1 withFallback:(CDUnknownBlockType)arg2 forState:(unsigned long long)arg3;
- (void)pu_sendActionForControlEventsWithHighlightTimeout:(unsigned long long)arg1;

@end
