/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessControl.h>

@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl : HMAccessControl

{
    NSMutableSet *_internalAccessories;
}

@property (copy, readonly) NSArray *accessories;

+ (id)shortDescription;
+ (_Bool)isAccessorySupported:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithUser:(id)arg1;
- (id)shortDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)initWithUser:(id)arg1 accessories:(id)arg2;

@end
