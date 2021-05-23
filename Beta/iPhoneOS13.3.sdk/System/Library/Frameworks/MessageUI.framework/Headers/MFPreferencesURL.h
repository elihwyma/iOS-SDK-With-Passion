/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@interface MFPreferencesURL : NSObject

+ (id)advancedAccountInfoURLForAccount:(id)arg1;
+ (id)_accountInfoSettingsURLForAccount:(id)arg1 preferenceURLType:(long long)arg2;
+ (id)_urlForRoot:(id)arg1 pathComponents:(id)arg2;
+ (id)_pathComponentsForAccount:(id)arg1 preferenceURLType:(long long)arg2;
+ (id)accountURLForAccount:(id)arg1;
+ (id)accountInfoURLForAccount:(id)arg1;
+ (id)addAccountURL;
+ (id)storageManagementURL;
+ (id)vipSenderListURL;
+ (id)blockedSenderURL;

@end
