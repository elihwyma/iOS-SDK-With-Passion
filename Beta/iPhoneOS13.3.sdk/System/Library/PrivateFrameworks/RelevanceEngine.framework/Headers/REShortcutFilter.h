/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REShortcutFilter : NSObject

+ (unsigned long long)filterVersion;

- (id)init;
- (unsigned long long)_actionIdentifierForIntent:(id)arg1;
- (unsigned long long)_actionIdentifierForUserActivity:(id)arg1;
- (id)intentByFilteringIntent:(id)arg1 withLevel:(unsigned long long)arg2;
- (id)userActivityByFilteringUserActivity:(id)arg1 withLevel:(unsigned long long)arg2;
- (struct NSString *)identifierForIntent:(id)arg1 bundleIdentifier:(id)arg2;
- (struct NSString *)identifierForUserActivity:(id)arg1 bundleIdentifier:(id)arg2;

@end
