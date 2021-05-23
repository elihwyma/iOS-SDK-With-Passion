/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface REKeyMultiValueMap : NSObject

{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (nonatomic, readonly) unsigned long long keyCount;
@property (nonatomic, readonly) unsigned long long valueCount;

- (id)init;
- (void)removeKey:(id)arg1;
- (id)valuesForKey:(id)arg1;
- (id)keyForValue:(id)arg1;
- (id)initWithValuePointFunctionOptions:(unsigned long long)arg1;
- (void)addKey:(id)arg1 withValues:(id)arg2;
- (void)insertValue:(id)arg1 forKey:(id)arg2;
- (void)removeValue:(id)arg1 forKey:(id)arg2;
- (void)enumerateValuesForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
