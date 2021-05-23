/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@interface BDSSyncUserDefaults : NSObject

+ (_Bool)isGlobalICloudDriveSyncOptedIn;
+ (_Bool)_isBundleIdentifierInArray:(struct __CFArray *)arg1;
+ (_Bool)isSignedIntoICloud;
+ (_Bool)isCloudKitSyncOptedIn;
+ (id)iCloudIdentity;
+ (_Bool)_isServiceEnabledAlternative:(struct __CFString *)arg1;
+ (_Bool)_isServiceDisabledAlternative:(struct __CFString *)arg1;
+ (void)_setService:(struct __CFString *)arg1 enabled:(_Bool)arg2;

@end
