/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class NSString;

@interface FPEmptyAllTrashedItemsOperation : FPActionOperation

{
    _Bool _gatheredItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)actionMain;

@end
