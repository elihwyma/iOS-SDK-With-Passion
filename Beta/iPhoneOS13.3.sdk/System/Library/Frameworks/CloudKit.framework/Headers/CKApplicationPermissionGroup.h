/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject

{
    NSArray *_containerIDs;
    NSArray *_applicationBundleIDs;
    unsigned long long _enabledPermissions;
}

@property (retain, nonatomic) NSArray *containerIDs;
@property (retain, nonatomic) NSArray *applicationBundleIDs;
@property (nonatomic) unsigned long long enabledPermissions;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;

@end
