/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface JTEffectPickerPreviewDiskCache : NSObject

{
    NSString *_cacheDirectoryPath;
}

@property (nonatomic, readonly) NSString *cacheDirectoryPath;

+ (id)createCacheAtDirectory:(id)arg1;
+ (id)cachedPathForEffect:(id)arg1 directoryPath:(id)arg2;

- (id)initWithDirectory:(id)arg1;
- (_Bool)hasPreviewForEffectID:(id)arg1;
- (void)previewForEffectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePreviewForEffectID:(id)arg1 image:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
