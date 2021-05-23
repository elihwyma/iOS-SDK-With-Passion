/*
 Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSInvocation, NSString;

__attribute__((visibility("hidden")))
@interface _PBProperty : NSObject

{
    NSString *_name;
    Class _objectType;
    Class _subObjectType;
    BOOL _type;
    BOOL _subType;
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    CDUnknownFunctionPointerType _toDictionaryReprFn;
    CDUnknownFunctionPointerType _fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    unsigned long long _structSize;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL type;
@property (nonatomic) BOOL subType;
@property (retain, nonatomic) Class objectType;
@property (retain, nonatomic) Class subObjectType;
@property (nonatomic, readonly) _Bool isObject;
@property (nonatomic, readonly) _Bool isStruct;
@property (nonatomic, readonly) _Bool canConvertFromString;

+ (id)pbPropertyFor:(struct objc_property *)arg1 type:(Class)arg2;
+ (id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)_parseStructDefinition:(id)arg1;
- (id)initWith:(struct objc_property *)arg1 type:(Class)arg2;
- (_Bool)instanceHasValue:(id)arg1;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1;
- (id)getObjValueFromInstance:(id)arg1;
- (void)setObjValue:(id)arg1 onInstance:(id)arg2;
- (id)getStructValueFromInstance:(id)arg1;
- (_Bool)setStructValue:(id)arg1 onInstance:(id)arg2;
- (id)getNumberValueFromInstance:(id)arg1;
- (void)setNumberValue:(id)arg1 onInstance:(id)arg2;
- (id)getPtrArrayValueFromInstance:(id)arg1;

@end
