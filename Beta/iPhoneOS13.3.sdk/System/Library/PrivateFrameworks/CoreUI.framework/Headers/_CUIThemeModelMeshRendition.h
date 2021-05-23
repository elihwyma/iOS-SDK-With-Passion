/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class MDLMesh, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelMeshRendition : CUIThemeRendition

{
    MDLMesh *_mesh;
    NSMutableArray *_submeshKeys;
}

@property (readonly) NSArray *submeshKeys;

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (unsigned long long)writeToData:(id)arg1;
- (id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2;
- (id)modelMesh;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end
