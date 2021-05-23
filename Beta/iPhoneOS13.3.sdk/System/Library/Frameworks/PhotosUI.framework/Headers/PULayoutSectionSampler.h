/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PULayoutSectionSampler : NSObject

- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(_Bool *)arg2;
- (long long)unsampledIndexForIndex:(long long)arg1;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dumpInternalMemory;

@end
