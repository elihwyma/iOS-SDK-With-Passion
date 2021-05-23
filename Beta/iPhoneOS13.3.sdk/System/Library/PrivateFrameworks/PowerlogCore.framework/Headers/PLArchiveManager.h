/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PLArchiveManager : NSObject

{
    _Bool _enabled;
    _Bool _interrupted;
    double _interval;
    double _mustRunInterval;
    double _mainDBDuration;
    double _allDBDuration;
    NSMutableArray *_archiveJobs;
    NSMutableArray *_notificationBlocks;
}

@property double interval;
@property double mustRunInterval;
@property double mainDBDuration;
@property double allDBDuration;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) _Bool interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (id)storageQueue;
+ (id)archiveEntriesFinished;
+ (id)allArchivePaths;
+ (id)lastArchivePath;
+ (void)systemTimeChangedByOffset:(double)arg1;
+ (id)archiveEntriesUnfinished;
+ (id)archiveEntriesWithComparisons:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cleanup;
- (void)disable;
- (_Bool)isInterrupted;
- (void)enable;
- (void)migrate;
- (void)recover;
- (void)runActivityWithLastCompletedDate:(id)arg1;
- (void)registerForArchivingNotificationUsingBlock:(CDUnknownBlockType)arg1;
- (void)handleFailure:(long long)arg1 forArchiveEntry:(id)arg2;
- (void)runInitialActivity;
- (id)getArchivingCriteria;
- (void)deprecateTables;
- (void)scheduleArchiveJobs;
- (void)runArchiveJobs;
- (void)migrateArchive:(id)arg1;

@end
