/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@interface WBSFeatureAvailability : NSObject

+ (_Bool)isSearchProviderEnabled:(unsigned long long)arg1;
+ (_Bool)_shouldShowChineseFeatures;
+ (_Bool)_shouldShowRussianFeatures;
+ (_Bool)supportsURLCredentialStorageAccessControlGroups;
+ (_Bool)wantsAggressiveKeychainCredentialCaching;

@end
