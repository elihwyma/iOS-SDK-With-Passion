/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray;

@interface DMFFetchApplicationsRequest

{
    _Bool _excludeIcon;
    _Bool _excludeUnmanagedApps;
    _Bool _deleteFeedback;
    unsigned long long _typeFilter;
    unsigned long long _stateFilter;
    NSArray *_bundleIdentifiers;
}

@property (nonatomic) _Bool excludeIcon;
@property (nonatomic) _Bool excludeUnmanagedApps;
@property (nonatomic) _Bool deleteFeedback;
@property (nonatomic) unsigned long long typeFilter;
@property (nonatomic) unsigned long long stateFilter;
@property (copy, nonatomic) NSArray *bundleIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
