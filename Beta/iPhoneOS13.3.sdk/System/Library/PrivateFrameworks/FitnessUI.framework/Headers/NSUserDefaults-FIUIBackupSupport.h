/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (FIUIBackupSupport)

+ (void)fu_backupStandardUserDefaultsKey:(id)arg1;
+ (void)fu_backupStandardUserDefaultsKey:(id)arg1 useContainer:(_Bool)arg2;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1 useContainer:(_Bool)arg2;
+ (id)fu_npsManager;
+ (void)fu_backupAndSetObject:(id)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetInteger:(long long)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetFloat:(float)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetDouble:(double)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetBool:(_Bool)arg1 forKey:(id)arg2;
+ (void)fu_backupAndSetURL:(id)arg1 forKey:(id)arg2;
+ (void)fu_synchronizeStandardUserDefaultsKey:(id)arg1;

@end
