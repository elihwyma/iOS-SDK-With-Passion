/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTVoiceProfileMigration : NSObject

+ (unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1;
+ (void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1;
+ (_Bool)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;
+ (_Bool)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2;

@end
