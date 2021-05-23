/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSASModelBase.h>

@interface MSPerformanceLogger : MSASModelBase

+ (id)sharedLogger;
+ (void)nukeCompletionBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (void)_logSqliteErrorLine:(int)arg1;
- (void)startOperation:(id)arg1 itemGUID:(id)arg2;
- (void)stopOperation:(id)arg1 itemGUID:(id)arg2;
- (void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)discardOperation:(id)arg1 itemGUID:(id)arg2;
- (void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(CDUnknownBlockType)arg3;

@end
