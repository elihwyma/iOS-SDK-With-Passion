/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKEventStream;

@protocol _DKKnowledgeQuerying;

@interface _CDSpotlightEventIndexerDataSource : NSObject

{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _DKEventStream *_stream;
}

@property (nonatomic, readonly) id <_DKKnowledgeQuerying> knowledgeStore;
@property (nonatomic, readonly) _DKEventStream *stream;

+ (unsigned long long)currentVersion;

- (id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1 eventStream:(id)arg2;
- (id)earliestEventCreationDateWithError:(id *)arg1;
- (id)searchableItemUniqueIdentifierWithDomain:(id)arg1 indexingIdentifier:(id)arg2;
- (id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg1 latestTombstoneDate:(id *)arg2 error:(id *)arg3;
- (id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg1 limit:(long long)arg2 nextBatch:(_Bool *)arg3 latestCreationDate:(id *)arg4 error:(id *)arg5;

@end
