/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKContainerID, NSSet;

__attribute__((visibility("hidden")))
@interface CKDContainerPrivacySettings : NSObject

{
    CKContainerID *_containerID;
    NSSet *_applicationBundleIDs;
    long long _discoverable;
}

@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSSet *applicationBundleIDs;
@property (nonatomic) long long discoverable;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)CKPropertiesDescription;

@end
