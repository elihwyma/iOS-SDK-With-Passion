/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBEnumArray : NSObject

{
    GPBMessage *_autocreator;
    CDUnknownFunctionPointerType _validationFunc;
    int *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) CDUnknownFunctionPointerType validationFunc;

+ (id)array;
+ (id)arrayWithValueArray:(id)arg1;
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2;
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(int)arg1;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRawValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithValueArray:(id)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addValues:(const int *)arg1 count:(unsigned long long)arg2;
- (void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 count:(unsigned long long)arg3;
- (void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addRawValues:(const int *)arg1 count:(unsigned long long)arg2;
- (int)rawValueAtIndex:(unsigned long long)arg1;
- (void)addRawValue:(int)arg1;
- (void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2;
- (void)addRawValuesFromArray:(id)arg1;

@end
