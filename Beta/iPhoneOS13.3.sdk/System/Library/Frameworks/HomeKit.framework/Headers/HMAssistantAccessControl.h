/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessControl.h>

#import <HomeKit/Swift-Protocol.h>

@class NSArray, NSSet;

@interface HMAssistantAccessControl : HMAccessControl <Swift>

{
    _Bool _enabled;
    unsigned long long _options;
    NSSet *_accessories;
}

@property (readonly, getter=isEnabled) _Bool enabled;
@property (readonly) _Bool allowUnauthenticatedRequests;
@property (copy, readonly) NSArray *accessories;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (_Bool)isAccessorySupported:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)shortDescription;
- (id)descriptionWithPointer:(_Bool)arg1;

@end
