/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPExtensionDataSource, FPSearchQueryDescriptor, FPSpotlightDataSource;

@protocol FPSpotlightDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSearchQueryDataSource : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _started;
    _Bool _invalidated;
    FPSpotlightDataSource *_spotlightDataSource;
    FPExtensionDataSource *_serverSearchDataSource;
    id <FPSpotlightDataSourceDelegate> _delegate;
    FPSearchQueryDescriptor *_queryDescriptor;
}

@property (nonatomic, readonly) FPSearchQueryDescriptor *queryDescriptor;
@property (weak, nonatomic) id <FPSpotlightDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool hasMoreIncoming;

- (void)invalidate;
- (void)start;
- (id)initWithQueryDescriptor:(id)arg1 predicate:(id)arg2;
- (void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(_Bool)arg3;
- (void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(_Bool)arg4;
- (void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
- (_Bool)dataSourceShouldAlwaysReplaceContents:(id)arg1;
- (void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2;
- (void)enumerationMightHaveResumed;

@end
