/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPropertyStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_storageAccessWorkQueue;
    NSMutableDictionary *_propertyStorage;
    NSArray *_keysRequiringExplicitPerThreadSignal;
    long long _cachePolicy;
}

- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCachePolicy:(long long)arg1 keysRequiringExplicitPerThreadSignal:(id)arg2;
- (_Bool)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(CDUnknownBlockType)arg2;
- (void)willAccessKVOForKey:(id)arg1;
- (void)didAccessKVOForKey:(id)arg1;
- (void)willAccessKVOForAllKeys;
- (void)didAccessKVOForAllKeys;

@end
