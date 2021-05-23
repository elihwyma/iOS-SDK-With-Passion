/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPQueryEnumerationSettings, FPSpotlightCollectorManager, FPSpotlightQueryDescriptor, NSPredicate, NSString;

@protocol FPSpotlightDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSpotlightDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    FPSpotlightCollectorManager *_collectorManager;
    FPQueryEnumerationSettings *_enumerationSettings;
    NSPredicate *_predicate;
    _Bool _invalidated;
    _Bool _hasMoreIncoming;
    id <FPSpotlightDataSourceDelegate> _delegate;
    FPSpotlightQueryDescriptor *_queryDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) FPSpotlightQueryDescriptor *queryDescriptor;
@property (weak, nonatomic) id <FPSpotlightDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool hasMoreIncoming;

- (void)invalidate;
- (void)_invalidate;
- (void)start;
- (void)_invalidateWithError:(id)arg1;
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;
- (void)collector:(id)arg1 didGatherItems:(id)arg2;
- (id)itemPredicateForCollector:(id)arg1;
- (unsigned long long)maximumNumberOfItemsForCollector:(id)arg1;
- (void)collector:(id)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
- (void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didUpdateItems:(id)arg2;
- (void)collector:(id)arg1 didEncounterError:(id)arg2;
- (void)enumerationMightHaveResumed;

@end
