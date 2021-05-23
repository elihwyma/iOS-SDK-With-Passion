/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject

{
    ACAccount *_account;
    NSArray *_privacySettings;
}

@property (retain) SLFacebookPostPrivacySetting *privacySetting;

- (id)initWithAccount:(id)arg1;
- (id)_userDefaultsDict;
- (id)defaultPrivacySetting;
- (id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1;
- (void)_setPrivacySettings:(id)arg1;
- (void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)privacySettings;
- (void)updatePrivacySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
