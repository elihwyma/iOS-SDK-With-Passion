/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/_UISettings.h>

@interface PHSettings : _UISettings

+ (id)_userDefaults;
+ (id)sharedSettings;
+ (id)suiteName;
+ (id)_defaultsKey;
+ (void)setSuiteName:(id)arg1;
+ (id)createSharedSettings;
+ (id)_signatureDictionary;

- (void)save;
- (id)parentSettings;

@end
