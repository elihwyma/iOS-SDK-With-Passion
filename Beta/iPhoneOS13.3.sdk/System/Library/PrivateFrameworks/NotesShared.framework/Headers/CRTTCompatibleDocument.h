/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRDocument.h>

@class NSMutableArray, TTCRVectorMultiTimestamp;

@interface CRTTCompatibleDocument : CRDocument

{
    TTCRVectorMultiTimestamp *_sharedTopotextTimestamp;
    NSMutableArray *_stringsWithClocksNeedingUpdating;
    NSMutableArray *_stringsWithClocksToResetAfterRealizingLocalChanges;
}

@property (retain, nonatomic) TTCRVectorMultiTimestamp *sharedTopotextTimestamp;
@property (retain, nonatomic) NSMutableArray *stringsWithClocksNeedingUpdating;
@property (retain, nonatomic) NSMutableArray *stringsWithClocksToResetAfterRealizingLocalChanges;

- (void)realizeLocalChanges;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4 topoTimestamp:(id)arg5;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;
- (void)mergeTimestampWithDocument:(id)arg1;

@end
