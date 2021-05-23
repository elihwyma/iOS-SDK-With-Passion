/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (id)buddyPrefsValueForKey:(id)arg1;
- (long long)restoreType;
- (void)clearRestoreType;
- (_Bool)didRestoreFromBackup;
- (_Bool)didSetupUsingiTunes;
- (void)recordLanguageSelectedUsingBuddy;
- (void)recordSetupUsingBuddy;

@end
