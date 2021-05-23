/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSCacheDelegate;

@interface NSCache : NSObject

{
    id _delegate;
    void *_private[5];
    void *_reserved;
}

@property (copy) NSString *name;
@property id <NSCacheDelegate> delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property _Bool evictsObjectsWithDiscardedContent;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(_Bool)arg1;
- (void)setMinimumObjectCount:(unsigned long long)arg1;
- (unsigned long long)minimumObjectCount;
- (_Bool)evictsObjectsWhenApplicationEntersBackground;
- (void)__apply:(CDUnknownBlockType)arg1;

@end
