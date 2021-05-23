/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLFunctionConstantValues.h>

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues

{
    struct MTLConstantStorage *_constantStorage;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 withName:(id)arg3;
- (id)newNamedConstantArray;
- (id)newIndexedConstantArray;
- (void)setConstantValues:(const void *)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange)arg3;
- (void *)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long *)arg2 errorMessage:(id *)arg3;
- (const void *)constantValueWithFunctionConstant:(id)arg1;

@end
