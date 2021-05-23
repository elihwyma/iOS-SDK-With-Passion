/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject

{
    struct ui_size_cache _cache;
}

- (id)description;
- (id).cxx_construct;
- (_Bool)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_25ed71ea *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(_Bool)arg4;
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_25ed71ea *)arg2 forTargetSize:(struct CGSize)arg3;
- (void)removeAllSizes;

@end
