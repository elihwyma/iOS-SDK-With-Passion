/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@protocol DCLRUCacheDelegate;

__attribute__((visibility("hidden")))
@interface DCLRUCache : NSObject

{
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id <DCLRUCacheDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned long long maxSize;
@property (nonatomic, readonly) NSArray *allKeys;
@property (weak, nonatomic) id <DCLRUCacheDelegate> delegate;

+ (void)purgeAllCaches;
+ (id)cacheCollection;

- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (void)p_removeOldestObject;

@end
