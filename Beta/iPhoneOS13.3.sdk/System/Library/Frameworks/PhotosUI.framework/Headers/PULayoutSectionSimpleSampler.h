/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PULayoutSectionSampler.h>

__attribute__((visibility("hidden")))
@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler

{
    long long _numberOfVisibleItems;
    long long _numberOfRealItems;
}

- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(_Bool *)arg2;
- (long long)unsampledIndexForIndex:(long long)arg1;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dumpInternalMemory;
- (id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2;

@end
