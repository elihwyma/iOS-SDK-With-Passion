/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableArray.h>

#import <Foundation/Swift-Protocol.h>

@interface NSArrayChanges : NSMutableArray <Swift>

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (_Bool)_isToManyChangeInformation;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addChange:(id)arg1;
- (void)applyChangesToArray:(id)arg1;
- (long long)_toManyPropertyType;
- (void)updateObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)addChanges:(id)arg1;

@end
