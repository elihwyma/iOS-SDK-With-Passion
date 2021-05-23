/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class MDLAsset, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelAssetRendition : CUIThemeRendition

{
    MDLAsset *_asset;
    NSMutableArray *_meshKeys;
}

@property (readonly) NSArray *meshKeys;

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initForArchiving:(id)arg1 withMeshRenditionKeys:(id)arg2;
- (unsigned long long)writeToData:(id)arg1;
- (id)modelAsset;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end
