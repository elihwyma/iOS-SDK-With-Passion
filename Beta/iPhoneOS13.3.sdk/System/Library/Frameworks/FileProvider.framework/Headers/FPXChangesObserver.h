/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPXObserver.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FPXChangesObserver : FPXObserver

{
    NSMutableArray *_changedItems;
    NSMutableArray *_deletedItemIDs;
    NSData *_originalSyncAnchor;
    CDUnknownBlockType _finishedBlock;
}

@property (copy) CDUnknownBlockType finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 previousChangeToken:(id)arg3;
- (void)didUpdateItems:(id)arg1;
- (void)didDeleteItemsWithIdentifiers:(id)arg1;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(_Bool)arg2;
- (void)finishEnumeratingWithError:(id)arg1;

@end
