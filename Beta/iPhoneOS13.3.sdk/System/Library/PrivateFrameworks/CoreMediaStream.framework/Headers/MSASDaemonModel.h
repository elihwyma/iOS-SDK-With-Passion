/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (id)init;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)earliestNextActivityDate;
- (id)nextActivityDateByPersonID;
- (void)clearAllNextActivityDates;

@end
