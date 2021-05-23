/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString, WAMessage;

@interface WAField : NSObject

{
    id _value;
    NSString *_typeInfoForRepeatableSubmessage;
    _Bool _isRepeatable;
    long long _type;
    NSString *_key;
}

@property (nonatomic) long long type;
@property (nonatomic) _Bool isRepeatable;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *repeatableValues;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) unsigned long long uint64Value;
@property (nonatomic) _Bool boolValue;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (retain, nonatomic) WAMessage *subMessageValue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 isRepeatable:(_Bool)arg2 key:(id)arg3 repeatableValues:(id)arg4 doubleValue:(double)arg5 floatValue:(float)arg6 int32Value:(int)arg7 int64Value:(long long)arg8 uint32Val:(unsigned int)arg9 uint64Value:(unsigned long long)arg10 boolValue:(_Bool)arg11 stringValue:(id)arg12 bytesValue:(id)arg13 subMessageValue:(id)arg14 andTypeInfoForRepeatableSubmessage:(id)arg15;
- (id)_ownTypeAsString;
- (void)_throwIncorrecTypeExceptionForType:(long long)arg1 isGet:(_Bool)arg2;
- (void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(_Bool)arg1 isGet:(_Bool)arg2 forType:(long long)arg3;
- (void)_addRepeatableValue:(id)arg1;
- (id)_typeAsString:(long long)arg1;
- (id)initWithType:(long long)arg1 isRepeatable:(_Bool)arg2 andKey:(id)arg3 andTypeInfoForRepeatableSubmessage:(id)arg4;
- (void)addRepeatableDoubleValue:(double)arg1;
- (void)addRepeatableFloatValue:(float)arg1;
- (void)addRepeatableInt32Value:(int)arg1;
- (void)addRepeatableInt64Value:(long long)arg1;
- (void)addRepeatableUInt32Value:(unsigned int)arg1;
- (void)addRepeatableUInt64Value:(unsigned long long)arg1;
- (void)addRepeatableBoolValue:(_Bool)arg1;
- (void)addRepeatableString:(id)arg1;
- (void)addRepeatableBytes:(id)arg1;
- (void)addRepeatableSubMessageValue:(id)arg1;
- (_Bool)isNumerical;
- (void)setTypeInformationForRepeatableSubmessage:(id)arg1;
- (id)typeInformationForRepeatableSubmessage;

@end
