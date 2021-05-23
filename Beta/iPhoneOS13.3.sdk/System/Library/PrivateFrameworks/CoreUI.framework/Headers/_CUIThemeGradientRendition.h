/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

__attribute__((visibility("hidden")))
@interface _CUIThemeGradientRendition : CUIThemeRendition

{
    CUIThemeGradient *gradient;
    double gradientAngle;
}

+ (id)_nodesFromNodeList:(struct _csigradientdatanode *)arg1 count:(unsigned long long)arg2 header:(const struct _csiheader *)arg3;
+ (struct __CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const struct _csiheader *)arg1;

- (void)dealloc;
- (id)gradient;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (unsigned int)gradientStyle;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (double)gradientDrawingAngle;

@end
