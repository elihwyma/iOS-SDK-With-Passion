/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <Foundation/NSString.h>

@interface NSString (LSDebuggingAdditions)

+ (id)NSStringFromLSInstallPhase:(unsigned long long)arg1;
+ (id)NSStringFromLSInstallState:(unsigned long long)arg1;
+ (id)NSStringFromLSInstallType:(unsigned long long)arg1;

- (_Bool)ls_matchesStringForPluginQuery:(id)arg1;
- (id)ls_cleanForPluginQuery;
- (_Bool)ls_matchesForPluginQuery:(id)arg1;

@end
