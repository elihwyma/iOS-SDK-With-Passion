/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSMapTable.h>

@interface NSMapTable (TSPersistence)

+ (id)newTspWeakObjectsMapTable;
+ (id)newTspStrongObjectsMapTable;

- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (void)enumerateIdentifiersAndObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end
