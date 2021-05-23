/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSURL.h>

@interface NSURL (BackingStores)

+ (id)dnds_localAssertionBackingStoreFileURL;
+ (id)dnds_settingsBackingStoreFileURL;
+ (id)dnds_legacySettingsFileURL;

@end
