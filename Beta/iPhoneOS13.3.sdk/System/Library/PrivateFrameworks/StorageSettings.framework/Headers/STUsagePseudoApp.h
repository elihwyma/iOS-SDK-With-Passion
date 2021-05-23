/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <StorageSettings/STStorageApp.h>

@interface STUsagePseudoApp : STStorageApp

- (id)name;
- (id)bundleIdentifier;
- (id)appIdentifier;
- (long long)totalSize;
- (long long)dataSize;
- (long long)purgeableSize;
- (long long)dynamicSize;
- (long long)staticSize;
- (id)initWithUsageBundleApp:(id)arg1;

@end
