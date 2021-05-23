/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (ThreeBars)

+ (id)defaultsDomain;
+ (id)userCacheDirectoryPath;
+ (id)wifiCacheDirectoryPath;

@end
