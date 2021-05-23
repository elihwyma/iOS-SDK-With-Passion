/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSUUID;

@interface HKProfileIdentifier : NSObject <Swift>

{
    NSUUID *_identifier;
    long long _type;
}

@property (copy, readonly) NSUUID *identifier;
@property (readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)primaryProfile;
+ (_Bool)isValidSecondaryProfileType:(long long)arg1;
+ (id)_profileWithUUID:(id)arg1 type:(long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
