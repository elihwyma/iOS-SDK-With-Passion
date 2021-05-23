/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface BSIntegerSet : NSObject

{
    NSHashTable *_hashTable;
    _Bool _hasZeroValue;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithHashTable:(id)arg1 hasZeroValue:(_Bool)arg2;
- (_Bool)containsValue:(long long)arg1;

@end
