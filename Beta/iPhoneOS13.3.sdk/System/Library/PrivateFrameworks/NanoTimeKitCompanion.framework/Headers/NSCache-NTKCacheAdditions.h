/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSCache.h>

@interface NSCache (NTKCacheAdditions)

- (id)ntkCachedObjectForKey:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (id)ntkCachedObjectForKeyProvider:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;

@end
