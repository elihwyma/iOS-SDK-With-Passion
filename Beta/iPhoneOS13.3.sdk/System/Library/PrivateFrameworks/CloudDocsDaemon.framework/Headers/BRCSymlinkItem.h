/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDirectoryItem, BRCDocumentItem, NSString;

@protocol BRCFSRooted;

__attribute__((visibility("hidden")))
@interface BRCSymlinkItem : BRCLocalItem

{
    NSString *_symlinkTarget;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (nonatomic, readonly) NSString *symlinkTarget;

- (_Bool)isSymLink;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (id)asSymlink;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)readTargetFromRelativePathAndSyncUp:(id)arg1;

@end
