/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableDictionary, SSDoubleLinkedList, SSLogConfig;

@protocol OS_dispatch_queue;

@interface SSLRUCache : NSObject

{
    unsigned long long _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_backingDictionary;
    SSDoubleLinkedList *_backingList;
    SSLogConfig *_logConfig;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *backingDictionary;
@property (retain, nonatomic) SSDoubleLinkedList *backingList;
@property (retain, nonatomic) SSLogConfig *logConfig;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long maxSize;

- (id)init;
- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (unsigned long long)_count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (void)_removeObjectForKey:(id)arg1;
- (id)allObjectsAndKeys;

@end
