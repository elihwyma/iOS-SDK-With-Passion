/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CUIThemeColorRendition : CUIThemeRendition

{
    struct CGColor *_cgColor;
    const struct _csicolor *_csiColor;
    NSString *_colorName;
}

- (void)dealloc;
- (struct CGColor *)cgColor;
- (_Bool)substituteWithSystemColor;
- (id)systemColorName;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (struct CGColorSpace *)_colorSpaceWithID:(long long)arg1;
- (const struct _csicolor *)csiColor;

@end
