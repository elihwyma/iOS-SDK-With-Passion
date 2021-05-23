/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSDoubleLinkedList, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AMSLRUCache : NSObject

{
    unsigned long long _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_backingDictionary;
    AMSDoubleLinkedList *_backingList;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *backingDictionary;
@property (retain, nonatomic) AMSDoubleLinkedList *backingList;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long maxSize;

- (id)init;
- (id)description;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (unsigned long long)_count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1 withCreationBlock:(CDUnknownBlockType)arg2;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (void)_removeObjectForKey:(id)arg1;
- (id)allObjectsAndKeys;

@end
