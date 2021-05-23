/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface IMOrderedMutableDictionary : NSObject

{
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_mutableOrderedSet;
    NSArray *_orderedItems;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)containsKey:(id)arg1;
- (id)orderedObjects;
- (void)setOrderedObject:(id)arg1 forKey:(id)arg2;
- (id)orderedObjectForKey:(id)arg1;
- (void)removeOrderedObjectForKey:(id)arg1;
- (_Bool)containsOrderedObject:(id)arg1;

@end
