/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OITSUReadWriteQueue;

__attribute__((visibility("hidden")))
@interface TSUConcurrentMutableDictionaryCache : NSObject

{
    NSMutableDictionary *_cache;
    OITSUReadWriteQueue *_readWriteQueue;
    NSString *_name;
    unsigned long long _count;
}

@property (nonatomic, readonly) OITSUReadWriteQueue *readWriteQueue;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)removeObjectForKey:(id)arg1 andWait:(_Bool)arg2;
- (void)p_didEnterBackground:(id)arg1;
- (void)performSyncWriteWithUnderlyingDictionary:(CDUnknownBlockType)arg1;

@end
