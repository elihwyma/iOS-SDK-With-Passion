/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPBlacklistManager : NSObject

+ (_Bool)createRuntimeBlacklistDirectory:(id)arg1;
+ (_Bool)removeAllFilesFromDirectory:(id)arg1;
+ (_Bool)validateBlacklist:(id)arg1;
+ (_Bool)saveBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 memoryLimit:(unsigned long long)arg4;
+ (_Bool)removeBlacklistFileWithKey:(id)arg1 fromDirectory:(id)arg2;
+ (id)keepLatestRuntimeBlacklistInDirectory:(id)arg1 compareToSystemBlacklistInDirectory:(id)arg2;
+ (unsigned long long)memoryRequiredBySystemBlacklistInDirectory:(id)arg1 runtimeBlacklistInDirectory:(id)arg2 blacklist:(id)arg3;
+ (_Bool)saveBlacklist:(id)arg1 knownVersionByKey:(id)arg2 systemDirectory:(id)arg3 runtimeDirectory:(id)arg4;
+ (unsigned long long)memorySizeWithDirectory:(id)arg1;
+ (_Bool)saveBlacklist:(id)arg1 forKey:(id)arg2 runtimeDirectory:(id)arg3;
+ (void)processRuntimeBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 blacklistLengthLimit:(unsigned long long)arg4;
+ (void)processRuntimeBlacklist;

- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end
