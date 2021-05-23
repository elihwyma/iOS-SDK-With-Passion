/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class TRIPBMessage;

@interface TRIPBDoubleArray : NSObject

{
    TRIPBMessage *_autocreator;
    double *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValue:(double)arg1;
+ (id)arrayWithValueArray:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (double)valueAtIndex:(unsigned long long)arg1;
- (id)initWithValues:(const double *)arg1 count:(unsigned long long)arg2;
- (void)addValue:(double)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)addValuesFromArray:(id)arg1;
- (id)initWithValueArray:(id)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addValues:(const double *)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(double)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;

@end
