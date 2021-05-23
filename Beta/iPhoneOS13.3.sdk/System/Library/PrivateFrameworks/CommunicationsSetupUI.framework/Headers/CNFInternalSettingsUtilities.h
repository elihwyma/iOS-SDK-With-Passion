/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@interface CNFInternalSettingsUtilities : NSObject

+ (void)signOutAllAccounts;
+ (id)currentInternalSettingsBundle;
+ (void)killImagent;
+ (void)killImavagent;
+ (void)killMediaServerd;
+ (void)nukeKeychain;
+ (void)killEverything;
+ (_Bool)isViceroyLoggingEnabled;
+ (void)setViceroyLoggingEnabled:(_Bool)arg1;
+ (void)syncImagentLogSettings;
+ (void)killFaceTime;
+ (void)killMobilePhone;
+ (void)killMobileSMS;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (id)IDSEnvironment;
+ (void)setIDSEnvironment:(id)arg1;

@end
