/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class MDLSubmesh;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelSubmeshRendition : CUIThemeRendition

{
    MDLSubmesh *_submesh;
}

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (unsigned long long)writeToData:(id)arg1;
- (id)initForArchiving:(id)arg1;
- (id)modelSubmesh;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end
