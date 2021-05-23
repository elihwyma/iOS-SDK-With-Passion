/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCInstallerReader : NSObject

+ (id)sharedReader;
+ (void)_setSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;

- (id)pathsToInstalledProfilesWithFilterFlags:(int)arg1;

@end
