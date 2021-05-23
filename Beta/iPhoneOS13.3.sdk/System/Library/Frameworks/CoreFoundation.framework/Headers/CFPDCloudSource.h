/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

__attribute__((visibility("hidden")))
@interface CFPDCloudSource : CFPDContainerSource

{
    SYDRemotePreferencesSource *cloudSource;
    struct __CFString *_configurationPath;
}

- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 storeName:(id)arg3 configurationPath:(struct __CFString *)arg4 containerPath:(struct __CFString *)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (struct __CFString *)debugDump;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(_Bool)arg1;
- (struct __CFString *)cloudConfigurationPath;
- (_Bool)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(_Bool)arg4;
- (id)copyPropertyListValidatingPlist:(_Bool)arg1;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(_Bool)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (id)copyConfigurationFromPath:(struct __CFString *)arg1;
- (void)registerForChangeNotifications;
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_writeToDisk:(_Bool)arg1;

@end
