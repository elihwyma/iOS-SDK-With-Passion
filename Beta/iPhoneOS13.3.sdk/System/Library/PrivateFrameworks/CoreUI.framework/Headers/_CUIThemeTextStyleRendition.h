/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

__attribute__((visibility("hidden")))
@interface _CUIThemeTextStyleRendition : CUIThemeRendition

{
    const struct _csitextstyle *_csiTextStyle;
}

- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (const struct _csitextstyle *)csiTextStyle;

@end
