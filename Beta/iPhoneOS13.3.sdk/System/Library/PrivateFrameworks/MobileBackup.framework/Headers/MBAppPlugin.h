/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/MBContainer.h>

@class NSArray, NSDictionary, NSString;

@interface MBAppPlugin : MBContainer

@property (nonatomic, readonly) NSString *bundleDir;
@property (nonatomic, readonly) NSString *ownerBundleID;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *entitlementsRelativePath;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSArray *allAppGroupContainers;

+ (id)appPluginWithPropertyList:(id)arg1;

- (id)domain;

@end
