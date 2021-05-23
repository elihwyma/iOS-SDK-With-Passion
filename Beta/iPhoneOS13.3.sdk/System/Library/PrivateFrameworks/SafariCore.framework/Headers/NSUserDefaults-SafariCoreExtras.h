/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (SafariCoreExtras)

+ (id)safari_notificationNameForUserDefaultsKey:(id)arg1;
+ (id)safari_cloudBookmarksDefaults;

- (id)safari_numberForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (_Bool)safari_toggleBoolForKey:(id)arg1;
- (void)safari_setDate:(id)arg1 forKey:(id)arg2;
- (void)safari_setBool:(_Bool)arg1 andNotifyForKey:(id)arg2;
- (_Bool)safari_toggleBoolAndNotifyForKey:(id)arg1;

@end
