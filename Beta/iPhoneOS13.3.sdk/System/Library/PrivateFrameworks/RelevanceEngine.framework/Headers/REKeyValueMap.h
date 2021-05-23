/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface REKeyValueMap : NSObject

{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)valueForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (unsigned long long)valueCount;
- (void)addKey:(id)arg1 withValue:(id)arg2;
- (id)keyForValue:(id)arg1;

@end
