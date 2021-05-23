/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <BaseBoardUI/BSUIMappedImageCache.h>

@class NSArray;

@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache

{
    NSArray *_libraryCollections;
}

+ (id)sharedCache;
+ (id)keyForFaceStyle:(long long)arg1 editOption:(id)arg2 mode:(long long)arg3 selectedOptions:(id)arg4;

- (id)_init;
- (void)_cleanCache;
- (void)_removeImagesForKeysMatching:(CDUnknownBlockType)arg1;

@end
