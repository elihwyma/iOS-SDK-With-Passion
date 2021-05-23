/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class PLArchiveEntry, PLTimer;

@protocol PLArchiveJobManager;

@interface PLArchiveJob : NSObject

{
    id <PLArchiveJobManager> _manager;
    PLArchiveEntry *_archiveEntry;
    PLTimer *_watchdog;
}

@property (retain) PLTimer *watchdog;
@property (retain) id <PLArchiveJobManager> manager;
@property (retain) PLArchiveEntry *archiveEntry;
@property (nonatomic) long long stage;
@property (nonatomic) unsigned long long numAttempts;

+ (id)storageQueue;
+ (SEL)runSelectorForStage:(long long)arg1;
+ (SEL)recoverSelectorForStage:(long long)arg1;

- (void)run;
- (void)recover;
- (void)startWatchdog;
- (void)stopWatchdog;
- (void)stageStart;
- (void)stageCopy;
- (void)stageTrim;
- (void)stageCompress;
- (void)stageRemove;
- (void)recoverCopy;
- (void)recoverTrim;
- (void)recoverCompress;
- (id)initWithManager:(id)arg1 andArchiveEntry:(id)arg2;

@end
