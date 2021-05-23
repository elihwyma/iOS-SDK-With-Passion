/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKConcept, NSString;

@protocol NSCopying><NSSecureCoding;

@interface HKConceptAttribute : NSObject <Swift>

{
    NSString *_name;
    long long _identifier;
    HKConcept *_concept;
    long long _valueType;
    id <NSCopying><NSSecureCoding> _value;
}

@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (weak, nonatomic, readonly) HKConcept *concept;
@property (nonatomic, readonly) long long valueType;
@property (copy, nonatomic, readonly) id <NSCopying><NSSecureCoding> value;

+ (_Bool)supportsSecureCoding;
+ (id)_attributeWithIdentifier:(long long)arg1 name:(id)arg2 valueType:(long long)arg3 value:(id)arg4;
+ (id)_attributeWithName:(id)arg1 valueType:(long long)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)_attributeBySettingConcept:(id)arg1;
- (id)_initWithIdentifier:(long long)arg1 name:(id)arg2 valueType:(long long)arg3 value:(id)arg4;

@end
