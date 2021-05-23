/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFFetchControlGroupIdentifiersRequest

{
    _Bool _includeTemporary;
    NSString *_leaderIdentifier;
}

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) _Bool includeTemporary;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
