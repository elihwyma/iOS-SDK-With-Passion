/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64EnumDictionary : NSObject

{
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
    CDUnknownFunctionPointerType _validationFunc;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) CDUnknownFunctionPointerType validationFunc;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)removeAll;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_a49d1a5a *)arg2 keyDataType:(unsigned char)arg3;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const long long *)arg3 count:(unsigned long long)arg4;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (_Bool)getEnum:(int *)arg1 forKey:(long long)arg2;
- (_Bool)getRawValue:(int *)arg1 forKey:(long long)arg2;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)setRawValue:(int)arg1 forKey:(long long)arg2;
- (void)removeEnumForKey:(long long)arg1;
- (void)setEnum:(int)arg1 forKey:(long long)arg2;
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;

@end
