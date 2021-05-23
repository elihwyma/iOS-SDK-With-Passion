/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@interface CloudTabServices : NSObject

+ (id)_serverConnection;
+ (void)didToggleCloudTabs:(_Bool)arg1 terminateAfterUpdating:(_Bool)arg2;
+ (void)clearAllCloudTabDevices;
+ (void)clearTabsForCurrentDevice;
+ (void)didToggleCloudTabs:(_Bool)arg1;

@end
