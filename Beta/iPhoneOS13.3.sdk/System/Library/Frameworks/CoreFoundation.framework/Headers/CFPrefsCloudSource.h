/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPrefsPlistSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsCloudSource : CFPrefsPlistSource

{
    const char *_configPath;
    const char *_storeName;
    _Bool _enabled;
}

- (void)dealloc;
- (id)createSynchronizeMessage;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
- (int)alreadylocked_updateObservingRemoteChanges;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1 sourceDictionary:(struct __CFDictionary *)arg2 cloudKeyEvaluator:(CDUnknownBlockType)arg3;
- (_Bool)enabled;
- (void)setEnabled:(_Bool)arg1;
- (void)setConfigurationPath:(struct __CFString *)arg1;
- (void)setStoreName:(struct __CFString *)arg1;

@end
