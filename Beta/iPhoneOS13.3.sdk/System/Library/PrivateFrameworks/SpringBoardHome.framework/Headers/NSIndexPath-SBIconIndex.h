/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (SBIconIndex)

+ (id)indexPathWithIconIndex:(unsigned long long)arg1 listIndex:(unsigned long long)arg2;
+ (id)indexPathWithFolderIconIndex:(unsigned long long)arg1 folderListIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3 listIndex:(unsigned long long)arg4;

- (unsigned long long)sbListIndex;
- (unsigned long long)sb_iconPathCount;
- (unsigned long long)sbIconIndex;
- (id)sb_indexPathByRemovingLastIconPathComponent;
- (id)sb_indexPathByAddingPathComponentWithListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;
- (id)sb_indexPathByAddingIndexPath:(id)arg1;
- (id)sb_lastIconPathComponent;
- (id)sb_iconRelativePathComponents;

@end
