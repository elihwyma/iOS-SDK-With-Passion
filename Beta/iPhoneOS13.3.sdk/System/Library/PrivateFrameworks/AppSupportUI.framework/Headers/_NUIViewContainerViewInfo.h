/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NUIViewContainerViewInfo : NSObject

{
    struct nui_size_cache _sizeCache;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    struct UIEdgeInsets _alignmentInsets;
    CDStruct_6c92d79e _baselines;
    struct {
        unsigned int alsoInvalidateSuperview:1;
        unsigned int alignmentInsetsAreCustom:1;
        unsigned int topBaselineIsCustom:1;
        unsigned int bottomBaselineIsCustom:1;
    } _flags;
}

- (id)init;
- (id).cxx_construct;
- (void)resetCaches;

@end
