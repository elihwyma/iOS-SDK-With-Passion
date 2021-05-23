/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INHomeAttribute : NSObject <Swift>

{
    _Bool _boolValue;
    long long _type;
    long long _valueType;
    double _doubleValue;
    NSString *_stringValue;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) _Bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 boolValue:(_Bool)arg2;
- (id)initWithType:(long long)arg1 doubleValue:(double)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(_Bool)arg3 doubleValue:(double)arg4 stringValue:(id)arg5;

@end
