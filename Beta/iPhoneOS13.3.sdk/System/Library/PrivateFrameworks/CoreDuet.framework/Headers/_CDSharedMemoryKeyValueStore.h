/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_os_log;

@interface _CDSharedMemoryKeyValueStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_archivingQueue;
    _Bool _needToPersist;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dictionary;
    void *_mappedMem;
    unsigned long long _size;
}

@property (nonatomic, readonly) unsigned long long size;

+ (id)sharedInstance;
+ (id)defaultName;
+ (unsigned long long)defaultSize;
+ (id)log;
+ (void *)openOrCreateSharedMemoryWithName:(id)arg1 size:(unsigned long long)arg2;
+ (id)readKeyedDataDictionaryFromMemory:(void *)arg1 size:(unsigned long long)arg2;
+ (id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2;

- (id)description;
- (id)allKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2;
- (id)errorForExceedingSizeLimits;
- (_Bool)persistToShMemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)asyncPersistToShMemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeDataForKeys:(id)arg1;
- (_Bool)removeDataForKey:(id)arg1;
- (void *)memoryPointer;

@end
