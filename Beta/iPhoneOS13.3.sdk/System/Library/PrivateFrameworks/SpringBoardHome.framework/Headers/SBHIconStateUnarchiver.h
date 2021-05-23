/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class SBHIconModel;

@interface SBHIconStateUnarchiver : NSObject

{
    _Bool _removesEmptyFolders;
    id _archive;
    SBHIconModel *_iconSource;
}

@property (nonatomic, readonly) id archive;
@property (nonatomic, readonly) SBHIconModel *iconSource;
@property (nonatomic) _Bool removesEmptyFolders;

+ (void)_getFolderDisplayName:(id *)arg1 defaultDisplayName:(id *)arg2 forRepresentation:(id)arg3 iconSource:(id)arg4;

- (id)initWithArchive:(id)arg1 iconSource:(id)arg2;
- (id)unarchive;
- (id)_nodeFromRepresentation:(id)arg1 context:(id)arg2;
- (id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2;
- (id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned long long)arg2 identifier:(id)arg3 context:(id)arg4 overflow:(id)arg5;
- (id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2;
- (id)_newFolderIconForFolder:(id)arg1;
- (Class)_folderClassForFolderType:(id)arg1 context:(id)arg2;
- (void)_getFolderDisplayName:(id *)arg1 defaultDisplayName:(id *)arg2 forRepresentation:(id)arg3;

@end
