/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVEffectResources : NSObject

+ (void)applicationWillTerminate;
+ (void)setInteractiveMode:(_Bool)arg1;
+ (void)cleanupEffectsCache;
+ (void)flushEngine;
+ (void)shutdownEngine;
+ (void)clearAllCachesAndPools;
+ (void)cleanupEffectsSingletons;
+ (_Bool)isInteractiveMode;
+ (void)updateMemoryEnvironment:(int)arg1;
+ (int)memoryEnvironment;
+ (void)setUTObserver:(id)arg1;
+ (id)utObserver;

@end
