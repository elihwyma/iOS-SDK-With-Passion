/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@interface SYLogs : NSObject

+ (void)initialize;
+ (id)logFolder;
+ (_Bool)shouldDisplaySyncErrorMessage;
+ (_Bool)shouldLogBubblesToAggD;
+ (_Bool)shouldDumpIDSOnSyncError;

@end
