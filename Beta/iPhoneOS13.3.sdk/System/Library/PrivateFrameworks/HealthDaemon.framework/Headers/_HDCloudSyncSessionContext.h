/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSyncAnchorRangeMap, NSError, NSMutableSet, NSProgress, NSString, _HKArchiveCreator;

@interface _HDCloudSyncSessionContext : NSObject

{
    NSMutableSet *_syncEntityClassesWithProcessedChanges;
    _Bool _isComplete;
    _Bool _success;
    _Bool _hasOpenSequence;
    HDProfile *_profile;
    _HKArchiveCreator *_archiveCreator;
    HDSyncAnchorRangeMap *_pendingAnchorRangeMap;
    unsigned long long _changesetCount;
    unsigned long long _archiveCount;
    CDUnknownBlockType _completion;
    NSError *_error;
    NSProgress *_progress;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) _HKArchiveCreator *archiveCreator;
@property (nonatomic, readonly) HDSyncAnchorRangeMap *pendingAnchorRangeMap;
@property (nonatomic) unsigned long long changesetCount;
@property (nonatomic) unsigned long long archiveCount;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic) _Bool isComplete;
@property (nonatomic) _Bool success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) _Bool hasOpenSequence;
@property (nonatomic, readonly) unsigned long long archiveSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_updateAnchorRangeMap:(id)arg1 withChange:(id)arg2 outError:(id *)arg3;
+ (id)_assetFileHandleForArchiveURL:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;

- (id)initWithChangedSyncEntityCount:(unsigned long long)arg1 profile:(id)arg2;
- (_Bool)resetInvalidArchiveCreatorWithSessionUUID:(id)arg1 error:(id *)arg2;
- (_Bool)addChangeData:(id)arg1 changes:(id)arg2 sessionIdentifier:(id)arg3 outError:(id *)arg4;
- (void)finishProgress;

@end
