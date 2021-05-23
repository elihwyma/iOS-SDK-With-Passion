/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface WLKCache : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_stack;
    NSMutableDictionary *_dictionary;
    unsigned long long _countLimit;
}

@property unsigned long long countLimit;

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_onQueueRemoveObjectForKey:(id)arg1;

@end
