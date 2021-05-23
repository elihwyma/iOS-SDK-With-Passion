/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <BaseBoardUI/BSUIMappedImageCache.h>

@class NSArray, NSMutableArray, NSString;

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache

{
    id _activeDeviceNotificationBlock;
    NSArray *_libraryCollections;
    NSMutableArray *_loadedCollections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCache;
+ (id)keyForAsset:(id)arg1 style:(id)arg2 resourceDirectory:(id)arg3;

- (id)_init;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)_cleanCache;
- (void)_pruneUnusedKeys;
- (void)_removeImagesForKeysMatching:(CDUnknownBlockType)arg1;

@end
