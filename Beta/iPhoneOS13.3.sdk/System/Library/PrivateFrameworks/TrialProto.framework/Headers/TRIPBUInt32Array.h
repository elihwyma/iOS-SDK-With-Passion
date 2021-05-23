/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class TRIPBMessage;

@interface TRIPBUInt32Array : NSObject

{
    TRIPBMessage *_autocreator;
    unsigned int *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValue:(unsigned int)arg1;
+ (id)arrayWithValueArray:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned int)valueAtIndex:(unsigned long long)arg1;
- (id)initWithValues:(const unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)addValue:(unsigned int)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)addValuesFromArray:(id)arg1;
- (id)initWithValueArray:(id)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addValues:(const unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned int)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;

@end
