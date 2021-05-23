/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INHomeAttributeRange, NSString;

@interface INHomeAttributeValue : NSObject <Swift>

{
    _Bool _boolValue;
    long long _type;
    double _doubleValue;
    long long _integerValue;
    NSString *_stringValue;
    long long _limitValue;
    long long _unit;
    INHomeAttributeRange *_rangeValue;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long integerValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long limitValue;
@property (nonatomic, readonly) long long unit;
@property (nonatomic, readonly) INHomeAttributeRange *rangeValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(long long)arg2;
- (id)initWithBoolValue:(_Bool)arg1;
- (id)initWithIntegerValue:(long long)arg1 unit:(long long)arg2;
- (id)initWithStringValue:(id)arg1 unit:(long long)arg2;
- (id)initWithLimitValue:(long long)arg1;
- (id)initWithRangeValue:(id)arg1;
- (id)initWithType:(long long)arg1 boolValue:(_Bool)arg2 doubleValue:(double)arg3 integerValue:(long long)arg4 stringValue:(id)arg5 limitValue:(long long)arg6 unit:(long long)arg7 rangeValue:(id)arg8;

@end
