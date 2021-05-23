/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface XBSnapshotContainerIdentity : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_dataContainerPath;
    NSString *_bundleContainerPath;
    NSString *_snapshotContainerPath;
}

@property (copy, nonatomic, readonly) NSString *snapshotContainerPath;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *bundlePath;
@property (copy, nonatomic, readonly) NSString *dataContainerPath;
@property (copy, nonatomic, readonly) NSString *bundleContainerPath;

+ (id)identityForBundleProxy:(id)arg1;
+ (id)identityForApplicationInfo:(id)arg1;
+ (id)identityForCompatibilityInfo:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4;
- (id)snapshotContainerPathForGroupID:(id)arg1;
- (id)snapshotContainerPathForSnapshot:(id)arg1;

@end
