/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, NSHashTable, NSMutableArray;

@protocol FCStreaming;

@interface FCStreamingResults : NSObject

{
    NSHashTable *_observers;
    id <FCStreaming> _underlyingStream;
    NSMutableArray *_results;
    FCAsyncSerialQueue *_serialQueue;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) id <FCStreaming> underlyingStream;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) FCAsyncSerialQueue *serialQueue;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct _NSRange range;

- (id)init;
- (id)array;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithResults:(id)arg1 followedByStream:(id)arg2;
- (id)objectsInRange:(struct _NSRange)arg1;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
