/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SLLastAccountManager : NSObject

+ (void)_setLastAccount:(id)arg1 prefKey:(id)arg2 prefAppID:(id)arg3;
+ (id)_lastAccountOfTypeIdentifier:(id)arg1 inStore:(id)arg2 updatePrefs:(_Bool)arg3 prefKey:(id)arg4 prefAppID:(id)arg5;
+ (id)lastTwitterAccountInAccountStore:(id)arg1 updatePrefs:(_Bool)arg2;
+ (void)setLastTwitterAccount:(id)arg1;

@end
