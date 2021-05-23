/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIImage.h>

@interface UIImage (VUISBGraphics)

+ (id)imageWithColor:(id)arg1;
+ (id)vui_videosUIImageNamed:(id)arg1;
+ (id)imageForPlaceholderURL:(id)arg1;
+ (id)vui_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;
+ (unsigned long long)vui_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(int)arg3;
+ (id)vui_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;

- (id)vui_iconImageOfSize:(struct CGSize)arg1 radius:(double)arg2 stroke:(double)arg3;
- (id)vui_iconImageOfSize:(struct CGSize)arg1;
- (id)vui_imageWithColor:(id)arg1;

@end
