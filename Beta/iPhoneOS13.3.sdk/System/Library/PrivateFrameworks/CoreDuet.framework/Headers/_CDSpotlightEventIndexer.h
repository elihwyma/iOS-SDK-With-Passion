/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class CSSearchableIndex, _CDEventIndexerContext, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject

{
    _CDEventIndexerContext *_context;
    CSSearchableIndex *_index;
    _CDSpotlightEventIndexerDataSource *_dataSource;
}

@property (retain, nonatomic) _CDEventIndexerContext *context;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) _CDSpotlightEventIndexerDataSource *dataSource;
@property (nonatomic, readonly, getter=isIndexing) _Bool indexing;

+ (id)keyPathsForValuesAffectingIndexing;

- (id)initWithDataSource:(id)arg1;
- (void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_beginIndexingFromLatestSpotlightClientState;
- (void)finishIndexing;
- (void)indexDeletionsAsBatch;
- (void)resetIndex;
- (void)indexAdditionsAsBatch;

@end
