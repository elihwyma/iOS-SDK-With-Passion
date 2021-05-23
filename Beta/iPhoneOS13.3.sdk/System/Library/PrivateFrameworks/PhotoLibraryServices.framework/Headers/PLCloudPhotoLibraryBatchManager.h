/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject

{
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    _Bool _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;
- (void)addRecord:(id)arg1;
- (void)addRecord:(id)arg1 ignoreBatchSize:(_Bool)arg2;
- (id)drainBatches;
- (long long)currentBatchCount;
- (_Bool)isAboveMaximumResourceBudget;

@end
