/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

{
    _Bool _wasSplit;
    _Bool _reachedMinSplit;
    _Bool _wasFixed;
    CPLChangeBatch *_batch;
    unsigned long long _retryCount;
}

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) _Bool wasSplit;
@property (nonatomic) _Bool reachedMinSplit;
@property (nonatomic) _Bool wasFixed;

- (id)init;
- (id)description;
- (unsigned long long)count;
- (void)addRecord:(id)arg1;
- (void)incrementRetryCount;
- (id)lastAddedRecord;
- (id)batchesSplitForError;

@end
