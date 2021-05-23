/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebCache : NSObject

+ (void)initialize;
+ (id)statistics;
+ (_Bool)isDisabled;
+ (void)setDisabled:(_Bool)arg1;
+ (void)empty;
+ (_Bool)addImageToCache:(struct CGImage *)arg1 forURL:(id)arg2 forFrame:(id)arg3;
+ (void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)arg1;
+ (_Bool)addImageToCache:(struct CGImage *)arg1 forURL:(id)arg2;
+ (void)removeImageFromCacheForURL:(id)arg1;
+ (struct CGImage *)imageForURL:(id)arg1;
+ (void)clearCachedCredentials;

@end
