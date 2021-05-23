/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSyncSession.h>

@class HDCloudSyncSequenceRecord, NSSet;

@interface HDCloudSyncSession : HDSyncSession

{
    NSSet *_excludedSyncStores;
    HDCloudSyncSequenceRecord *_sequenceRecord;
}

@property (retain, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;

- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)excludedSyncStores;
- (void)setExcludedSyncStores:(id)arg1;

@end
