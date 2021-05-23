/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class TRIPBMessage;

@interface TRIPBInt64Array : NSObject

{
    TRIPBMessage *_autocreator;
    long long *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValue:(long long)arg1;
+ (id)arrayWithValueArray:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (long long)valueAtIndex:(unsigned long long)arg1;
- (id)initWithValues:(const long long *)arg1 count:(unsigned long long)arg2;
- (void)addValue:(long long)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)addValuesFromArray:(id)arg1;
- (id)initWithValueArray:(id)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addValues:(const long long *)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(long long)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;

@end
