/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (GKVersioning)

+ (id)_gkBundleWithIdentifier:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;
+ (_Bool)_gkMainBundleIsGameCenterSystemProcess;

- (id)_gkPathForMessageImage;
- (_Bool)_gkIsPreferences;
- (id)_gkBundleVersion;
- (id)_gkBundleShortVersion;
- (id)_gkLocalizedName;
- (id)_gkFrameworkVersionDescription;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (_Bool)_gkIsGameCenter;
- (_Bool)_gkIsGameCenterExtension;
- (_Bool)_gkIsDaemon;
- (id)_gkPathForImageWithName:(id)arg1;
- (id)_gkPathForSoundWithName:(id)arg1;
- (id)_gkLocalizedStringFromLocaleName:(id)arg1 key:(id)arg2 tableName:(id)arg3 value:(id)arg4;
- (_Bool)_gkIsBadgingEnabled;
- (_Bool)_gkShouldAddQuickActions;
- (id)_gkPathForInviteSound;
- (id)_gkPathForChallengeSound;
- (id)_gkPreferredLanguage;

@end
