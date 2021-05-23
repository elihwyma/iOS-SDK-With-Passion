/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CLKUIResourceManager : NSObject

{
    NSMutableDictionary *_recentProvidersForUuid;
    NSMutableDictionary *_atlasesByUuid;
    NSMutableDictionary *_providersByKey;
    unsigned long long _memoryUsed;
    NSMutableArray *_textureLoaderQueues;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)purge:(id)arg1;
- (void)_purgeAllUnconditionally;
- (id)_newAtlasForUuid:(id)arg1;
- (void)_purgeAtlases:(id)arg1;
- (void)purgeAllUnused;
- (id)_fetchOldestAtlas;
- (id)textureForUuid:(id)arg1 delegate:(id)arg2 rect: /* Error: Ran out of types for this method. */;
- (id)borrowTextureLoadingQueue;
- (void)returnTextureLoadingQueue:(id)arg1;
- (_Bool)memoryIsAvailable:(unsigned long long)arg1;
- (_Bool)ensureMemoryAvailable:(unsigned long long)arg1;
- (void)notifyAtlas:(id)arg1 willChangeToMemoryCost:(unsigned long long)arg2;
- (id)delegateForUuid:(id)arg1;

@end
