/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LogDumpUtility : NSObject

+ (id)getCachesDirectoryPath;
+ (_Bool)createDirectory:(id)arg1;
+ (id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;
+ (id)getDefaultLogDumpPath;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (id)filesSortedByTimestamp:(id)arg1;
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;

@end
