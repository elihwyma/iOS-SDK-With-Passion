/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPrefsSearchListSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource

- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg1 fromValue:(void *)arg2 toValue:(void *)arg3;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg1 isRemote:(_Bool)arg2;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;

@end
