/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPExtensionEnumerationSettings, NSData, NSString;

@protocol FPCollectionDataSourceDelegate, FPDLifetimeServicing, FPXEnumerator, OS_dispatch_queue;

@interface FPExtensionDataSource : NSObject

{
    FPExtensionEnumerationSettings *_enumerationSettings;
    id <FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _started;
    _Bool _invalidated;
    _Bool _shouldUpdate;
    _Bool _enumeratingExtensionResults;
    NSData *_nextPageToken;
    NSData *_changeToken;
    unsigned long long _numGatheredItems;
    id <FPDLifetimeServicing> _lifetimeExtender;
    _Bool _hasMoreIncoming;
    id <FPCollectionDataSourceDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMoreIncoming;
@property (weak, nonatomic) id <FPCollectionDataSourceDelegate> delegate;

- (void)invalidate;
- (void)_invalidate;
- (void)start;
- (void)invalidateWithError:(id)arg1;
- (void)_updateItems;
- (void)_invalidateWithError:(id)arg1;
- (void)enumerationResultsDidChange;
- (id)initWithEnumerationSettings:(id)arg1;
- (void)enumerationMightHaveResumed;
- (void)didUpdateItem:(id)arg1;
- (void)_gatherInitialItems;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)_initialPageFromSortDescriptors:(id)arg1;
- (void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2;

@end
