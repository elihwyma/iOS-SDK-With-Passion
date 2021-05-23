/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (ConferenceRegistrationAdditions)

+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (id)CNFObjectForKey:(id)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(_Bool)arg1;
+ (_Bool)shouldShowCNFRegistrationSettingsUI;
+ (unsigned long long)CNFRegEmailValidationTimeout;
+ (void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1;
+ (id)CNFRegSavedAccountName;
+ (void)setCNFRegSavedAccountName:(id)arg1;
+ (void)setCNFRegServerURLOverride:(id)arg1;
+ (id)CNFRegServerURLOverride;
+ (void)setShouldShowCNFRegistrationServerLogs:(_Bool)arg1;
+ (_Bool)shouldShowCNFRegistrationServerLogs;

@end
