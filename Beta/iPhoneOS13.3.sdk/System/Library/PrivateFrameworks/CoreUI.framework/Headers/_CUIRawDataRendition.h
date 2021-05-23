/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition : CUIThemeRendition

{
    NSData *_dataBytes;
}

- (void)dealloc;
- (id)data;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end
