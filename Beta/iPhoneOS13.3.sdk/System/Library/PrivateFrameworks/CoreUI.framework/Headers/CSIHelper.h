/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, _CSIRenditionBlockData, _CUIThemePixelRendition;

__attribute__((visibility("hidden")))
@interface CSIHelper : NSObject

{
    struct _slice slice;
    NSData *csiData;
    struct _csibitmap *bmp;
    int renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    _CSIRenditionBlockData *sharedBlockDataGray;
    _CSIRenditionBlockData *retainedBlockData;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
    NSString *blockDataCacheKeyGray;
    unsigned long long sourceRowbytes;
    unsigned int shouldCache:1;
    unsigned int usedForDataProvider:1;
    unsigned int _reserved:30;
}

@end
