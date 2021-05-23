/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface RESortedDictionary : NSObject

{
    NSMutableDictionary *_values;
    NSMutableArray *_order;
}

@property (readonly) unsigned long long count;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end
