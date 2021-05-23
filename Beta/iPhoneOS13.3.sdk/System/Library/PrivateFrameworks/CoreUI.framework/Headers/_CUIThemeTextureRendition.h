/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIStructuredThemeStore, NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureRendition : CUIThemeRendition

{
    CUIStructuredThemeStore *_sourceProvider;
    long long _textureInterpretation;
    _Bool _textureSourceImageOpaque;
    TXRTextureInfo *_textureInfo;
    NSMutableArray *_textureMipLevels;
}

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)provideTextureInfo;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 withBufferAllocator:(id)arg4;
- (id)mipLevels;
- (id)_texturedImageWithKey:(id)arg1;

@end
