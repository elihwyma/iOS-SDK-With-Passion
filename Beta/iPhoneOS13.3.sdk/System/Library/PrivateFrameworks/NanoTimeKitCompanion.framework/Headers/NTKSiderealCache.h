/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface NTKSiderealCache : NSObject

{
    NSCache *_dataCache;
}

+ (id)sharedCache;

- (id)_init;
- (id)imageDataForKey:(id)arg1 generationBlock:(CDUnknownBlockType)arg2;
- (void)_purgeEverything;
- (void)purgeCachedKey:(id)arg1;
- (id)gradientData:(CDUnknownBlockType)arg1;

@end
