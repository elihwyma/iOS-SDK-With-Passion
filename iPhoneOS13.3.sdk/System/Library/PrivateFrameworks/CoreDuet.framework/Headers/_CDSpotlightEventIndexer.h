//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, _CDEventIndexerContext, _CDSpotlightEventIndexerDataSource;

@interface _CDSpotlightEventIndexer : NSObject
{
    _CDEventIndexerContext *_context;
    CSSearchableIndex *_index;
    _CDSpotlightEventIndexerDataSource *_dataSource;
}

+ (id)keyPathsForValuesAffectingIndexing;
@property(readonly, nonatomic) _CDSpotlightEventIndexerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) _CDEventIndexerContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)resetIndex;
- (void)indexAdditionsAsBatch;
- (void)indexDeletionsAsBatch;
- (void)_beginIndexingFromLatestSpotlightClientState;
- (void)finishIndexing;
- (void)beginIndexingWithBatchSize:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic, getter=isIndexing) BOOL indexing;
- (id)initWithDataSource:(id)arg1;

@end

