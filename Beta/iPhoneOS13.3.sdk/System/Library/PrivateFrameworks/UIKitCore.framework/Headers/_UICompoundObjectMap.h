/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICompoundObjectMap : NSObject

{
    NSMutableDictionary *_mapTable;
}

+ (id)generateKeyForObject:(id)arg1 andProperty:(id)arg2;
+ (id)compoundObjectMap;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3;
- (void)performWithEach:(CDUnknownBlockType)arg1;
- (id)valueForObject:(id)arg1 andProperty:(id)arg2;
- (void)removeAllMappings;
- (id)deepCopy;

@end
