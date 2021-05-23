/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPrefsPlistSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsManagedSource : CFPrefsPlistSource

- (_Bool)managed;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containingPreferences:(id)arg4;
- (long long)sendMessageSettingValue:(void *)arg1 forKey:(struct __CFString *)arg2;

@end
