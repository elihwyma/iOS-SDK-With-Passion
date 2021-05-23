/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject

{
    NSDictionary *_restrictions;
    NSDictionary *_globalRestrictions;
    NSDictionary *_profileRestrictions;
}

@property (copy, nonatomic, readonly) NSDictionary *restrictions;
@property (copy, nonatomic, readonly) NSDictionary *globalRestrictions;
@property (copy, nonatomic, readonly) NSDictionary *profileRestrictions;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestrictions:(id)arg1;

@end
