/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (BRAdditions)

- (_Bool)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (void)br_setPutBackInfoOnItemAtURL:(id)arg1;
- (id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)br_trashItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (_Bool)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (void)br_setLastOpenDate:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setFavoriteRank:(id)arg1 onItemAtURL:(id)arg2;
- (id)br_topLevelSharedFolderForURL:(id)arg1 error:(id *)arg2;
- (id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;

@end
