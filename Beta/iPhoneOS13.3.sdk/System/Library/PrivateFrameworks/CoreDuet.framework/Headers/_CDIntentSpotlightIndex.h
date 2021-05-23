/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDSpotlightEventIndexer, _DKKnowledgeStorage;

@protocol OS_dispatch_queue;

@interface _CDIntentSpotlightIndex : NSObject

{
    _Bool _includeAdditions;
    _DKKnowledgeStorage *_storage;
    _CDSpotlightEventIndexer *_indexer;
    double _delay;
    unsigned long long _batchSize;
    NSObject<OS_dispatch_queue> *_activityQueue;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) _DKKnowledgeStorage *storage;
@property (nonatomic, readonly) _CDSpotlightEventIndexer *indexer;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (nonatomic) _Bool includeAdditions;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (void)dealloc;
- (id)initWithKnowledgeStorage:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
- (void)triggerIndexIncludingAdditions:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
