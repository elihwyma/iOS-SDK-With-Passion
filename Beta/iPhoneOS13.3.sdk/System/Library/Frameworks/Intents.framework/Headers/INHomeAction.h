/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INHomeAction : NSObject <Swift>

{
    _Bool _boolValue;
    long long _type;
    long long _valueType;
    double _doubleValue;
    long long _integerValue;
    NSString *_stringValue;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) _Bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long integerValue;
@property (copy, nonatomic, readonly) NSString *stringValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 boolValue:(_Bool)arg2;
- (id)initWithType:(long long)arg1 doubleValue:(double)arg2;
- (id)initWithType:(long long)arg1 integerValue:(long long)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(_Bool)arg3 doubleValue:(double)arg4 integerValue:(long long)arg5 stringValue:(id)arg6;

@end
