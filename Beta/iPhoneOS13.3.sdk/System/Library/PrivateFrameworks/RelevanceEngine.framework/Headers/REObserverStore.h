/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable;

@interface REObserverStore : NSObject

{
    struct os_unfair_lock_s _lock;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *allObservers;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFunctionsOptions:(unsigned long long)arg1;

@end
