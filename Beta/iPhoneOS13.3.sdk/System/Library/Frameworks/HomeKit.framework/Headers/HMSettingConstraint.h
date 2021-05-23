/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSUUID;

@protocol NSCopying><NSSecureCoding;

@interface HMSettingConstraint : NSObject <Swift>

{
    NSUUID *_identifier;
    long long _type;
    id <NSCopying><NSSecureCoding> _value;
}

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (copy, readonly) id <NSCopying><NSSecureCoding> value;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)supportedValueClasses;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end
