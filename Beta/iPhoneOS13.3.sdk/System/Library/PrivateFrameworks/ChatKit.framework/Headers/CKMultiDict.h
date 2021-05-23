/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject

{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned long long _count;
    NSMutableDictionary *_dictionary;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (id)init;
- (id)description;
- (unsigned long long)count;
- (id)allKeys;
- (void)removeAllObjects;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)peekObjectForKey:(id)arg1;
- (id)popObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)headObjectForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (void)removeObjectsForKey:(id)arg1;

@end
