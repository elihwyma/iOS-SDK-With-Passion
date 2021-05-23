/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureImageRendition : CUIThemeRendition

{
    NSMutableArray *_textureImages;
}

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)textureImages;

@end
