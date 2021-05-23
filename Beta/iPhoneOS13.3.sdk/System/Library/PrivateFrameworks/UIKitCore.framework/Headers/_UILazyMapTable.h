/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject

{
    CDUnknownBlockType _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (id)description;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keys;
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;
- (id)cachedObjectEnumerable;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (_Bool)hasCachedObjectForKey:(id)arg1;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;
- (id)cachedObjects;
- (id)keyEnumerable;

@end
