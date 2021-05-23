/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <Swift>

{
    NSDate *_lastViolationDate;
    NSDate *_lastResetDate;
}

@property (readonly, getter=hasCurrentViolation) _Bool currentViolation;
@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2;

@end
