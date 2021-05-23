/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueMutableArray.h>

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray

{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    _Bool _treatNilValuesLikeEmptyArrays;
    char _padding[3];
}

- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;

@end
