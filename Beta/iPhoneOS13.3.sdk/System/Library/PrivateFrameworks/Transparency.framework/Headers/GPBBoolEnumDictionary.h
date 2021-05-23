/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolEnumDictionary : NSObject

{
    GPBMessage *_autocreator;
    CDUnknownFunctionPointerType _validationFunc;
    int _values[2];
    _Bool _valueSet[2];
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) CDUnknownFunctionPointerType validationFunc;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)removeAll;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const _Bool *)arg3 count:(unsigned long long)arg4;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (_Bool)getEnum:(int *)arg1 forKey:(_Bool)arg2;
- (_Bool)getRawValue:(int *)arg1 forKey:(_Bool)arg2;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)setRawValue:(int)arg1 forKey:(_Bool)arg2;
- (void)removeEnumForKey:(_Bool)arg1;
- (void)setEnum:(int)arg1 forKey:(_Bool)arg2;

@end
