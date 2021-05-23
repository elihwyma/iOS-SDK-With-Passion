/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFAttachmentCapabilities : NSObject

+ (_Bool)placeholdersAvailable;
+ (unsigned long long)currentDownloadLimit;
+ (id)capabilitiesDictionary;
+ (_Bool)mailDropAvailableForAccount:(id)arg1;
+ (unsigned long long)_mailDropLimit;
+ (_Bool)mailDropAvailable;
+ (_Bool)_isMailDropDevice;
+ (_Bool)mailDropConfigured;
+ (id)mailDropPreferences;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentMessageLimit;
+ (unsigned long long)mailDropThreshold;
+ (unsigned long long)currentPlaceholderThreshold;
+ (unsigned long long)currentUploadLimitForAccount:(id)arg1;
+ (double)mailDropExpiration;
+ (id)mailDropWhitelistedDownloadDomains;

@end
