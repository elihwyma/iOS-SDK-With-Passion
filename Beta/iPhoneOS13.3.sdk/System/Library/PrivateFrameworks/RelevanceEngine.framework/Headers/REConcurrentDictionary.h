/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue;

@interface REConcurrentDictionary : NSObject

{
    NSMapTable *_table;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long count;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initStrongToStrongDictionary;
- (id)initWeakToStrongDictionary;

@end
