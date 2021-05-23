/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest

{
    _Bool _deleteFeedback;
    _Bool _managedAppsOnly;
    _Bool _advanceTransientStates;
    unsigned long long _type;
    NSArray *_bundleIdentifiers;
    NSNumber *_storeItemIdentifier;
    NSURL *_manifestURL;
    NSArray *_propertyKeys;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) _Bool deleteFeedback;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;
@property (nonatomic) _Bool managedAppsOnly;
@property (nonatomic) _Bool advanceTransientStates;
@property (copy, nonatomic) NSArray *propertyKeys;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
